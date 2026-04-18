#include <WiFi.h>
#include <WiFiClientSecure.h>

#define PIR 13
#define LED 12

const char* ssid = "Wokwi-GUEST";
const char* password = "";

// 🔐 Device Info
String deviceID = "door_01";

// 🔐 Telegram
String botToken = "BOT TOKEN";
String chatID = "CHAT ID";

int lastState = LOW;
int minuteCounter = 0;

// 🔹 Timestamp
String getTimestamp() {
  int day = 14;
  int month = 4;
  int year = 2026;

  int hour = 10 + (minuteCounter / 60);
  int minute = minuteCounter % 60;

  minuteCounter++;

  return String(day) + "-" + String(month) + "-" + String(year) +
         "_" + String(hour) + "-" + String(minute);
}

void setup() {
  pinMode(PIR, INPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(115200);

  WiFi.begin(ssid, password);
  Serial.print("Connecting to WiFi");

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("\nConnected!");
}

void loop() {
  int motion = digitalRead(PIR);

  if (motion == HIGH && lastState == LOW) {

    Serial.println("INTRUSION DETECTED!");

    String imageName = "image_" + getTimestamp() + ".jpg";

    // 📲 Telegram message (clean format)
    String message = "Intrusion Detected | Device:" + deviceID + " | Image:" + imageName;

    String url = "https://api.telegram.org/bot" + botToken +
                 "/sendMessage?chat_id=" + chatID +
                 "&text=" + message;

    WiFiClientSecure client;
    client.setInsecure();

    if (client.connect("api.telegram.org", 443)) {
      client.print(String("GET ") + url + " HTTP/1.1\r\n" +
                   "Host: api.telegram.org\r\n" +
                   "Connection: close\r\n\r\n");

      Serial.println("Telegram Alert Sent!");
    }

    // Alarm
    digitalWrite(LED, HIGH);
    delay(3000);
    digitalWrite(LED, LOW);

    delay(3000);
  }

  lastState = motion;
}