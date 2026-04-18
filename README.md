# 🔐 IoT-Based Smart Door Security System

## 📌 Overview

This project presents a **Smart Door Security System** built using IoT concepts. It is designed to detect unauthorized motion near a door and instantly notify the user through real-time alerts. The system uses an **ESP32 microcontroller**, a **PIR motion sensor**, and a **Telegram Bot API** to provide a secure, automated, and efficient security solution.

---

## 🚀 Key Features

* 🔍 Real-time motion detection using PIR sensor
* 📸 Simulated image capture with timestamp-based naming
* 📲 Instant alert notification via Telegram bot
* 🔐 Secure communication using HTTPS
* 🆔 Device identification for tracking
* 🚨 LED-based alarm indication
* 🔁 Event-driven architecture (efficient operation)
* 📊 Intrusion logging with counter

---

## ⚙️ Components Used

* **ESP32** – Microcontroller with Wi-Fi capability
* **PIR Motion Sensor** – Detects human motion
* **LED** – Represents alarm system
* **Wi-Fi Network** – Enables IoT communication

---

## 🛠️ Software & Tools

* **Wokwi Simulator** – For circuit simulation
* **Arduino IDE (Embedded C)** – For coding
* **Telegram Bot API** – For real-time notifications
* **GitHub** – For project hosting

---

## 🔁 Working Principle

1. The system continuously monitors the environment using a PIR sensor.
2. When motion is detected, the ESP32 triggers an event.
3. A simulated image is generated using a timestamp-based filename.
4. A secure HTTPS request is sent to Telegram API.
5. The user receives a real-time alert on their mobile device.
6. LED is activated as an alarm indication.
7. The system resets and continues monitoring.

---

## 🧠 System Architecture

```
PIR Sensor → ESP32 → Image Simulation → Telegram Alert → User
                                ↓
                              LED Alarm
```

---

## 📊 Results & Output

* Motion detection successfully triggers system response
* Timestamp-based image naming simulates real capture
* Telegram alerts are received in real-time
* LED indicates intrusion visually
* System operates efficiently under simulation

---

## 📸 Project Output

![Output](images/Screenshot%202026-04-18%20024446.png)

![Output](images/Screenshot%202026-04-15%20004038.png)

![Output](images/WhatsApp%20Image%202026-04-15%20at%2000.52.32.jpeg)

---

## 🔐 Cybersecurity Features

* **HTTPS Communication** – Ensures encrypted data transfer
* **Authentication Token** – Prevents unauthorized access
* **Device ID** – Identifies the source of alert
* **Anti-Spam Mechanism** – Prevents repeated triggering

---

## ✅ Advantages

* Low-cost and easy to implement
* Real-time alert system
* Scalable to smart home applications
* Energy-efficient (event-driven)
* No continuous monitoring required

---

## ⚠️ Limitations

* Camera is simulated (no real image capture)
* Depends on internet connectivity
* Limited by simulation environment (Wokwi)

---

## 🔮 Future Improvements

* 📷 Integration with **ESP32-CAM** for real image capture
* 🤖 Face recognition using AI/ML
* ☁️ Cloud storage (Firebase/AWS) for image logs
* 📱 Mobile application dashboard
* 🔐 Biometric or password-based door unlocking
* 🏠 Multi-door monitoring system
* 📊 Advanced analytics and intrusion trends

---

## 🌍 Real-World Applications

* Home security systems
* Office and workspace monitoring
* Hostel and apartment security
* Smart building automation

---

## 🎯 Conclusion

This project demonstrates a practical implementation of an **IoT-based smart security system** capable of detecting intrusions and sending real-time alerts. By integrating communication, automation, and basic cybersecurity features, the system provides an efficient and scalable solution for modern security needs. It also lays the foundation for future enhancements such as AI-based detection and real-time surveillance systems.

---

## 👨‍💻 Author

**Mallikarjun**

---

## ⭐ Support

If you found this project useful, consider giving it a ⭐ on GitHub!
