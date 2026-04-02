# 🚗 Advanced Smart Rover

### *WiFi-Controlled FPV Rover with Obstacle Avoidance (ESP32 आधारित Robotics Project)*

![Project Banner](https://via.placeholder.com/1000x300?text=Advanced+Smart+Rover)

---

## 🌟 Overview

The **Advanced Smart Rover** is a next-generation robotics project that integrates **IoT, embedded systems, and real-time control**.
It enables **wireless navigation via WiFi**, **live FPV video streaming**, and **autonomous obstacle detection**, making it ideal for surveillance and smart mobility applications.

---

## 🚀 Key Features

✨ **WiFi-Based Control** – No app required, control via browser
📷 **FPV Live Streaming** – Real-time video using ESP32-CAM
🚧 **Obstacle Avoidance** – Ultrasonic-based safety system
🌐 **Web Interface** – Minimal, responsive control panel
⚡ **Real-Time Response** – Low latency motor control

---

## 🧠 System Architecture

```id="0rj4z9"
[ Smartphone ]
       │
       ▼
   WiFi Network (ESP32 AP)
       │
       ▼
   ESP32 Controller
   ├── Motor Driver → Motors
   ├── Ultrasonic Sensor → Obstacle Detection
   └── ESP32-CAM → Live Video Stream
```

---

## 🧰 Tech Stack

| Category        | Technology Used      |
| --------------- | -------------------- |
| Microcontroller | ESP32                |
| Programming     | Arduino (C/C++)      |
| Communication   | WiFi (HTTP Server)   |
| Sensors         | Ultrasonic (HC-SR04) |
| Vision          | ESP32-CAM            |
| Hardware        | L298N Motor Driver   |

---

## ⚙️ Getting Started

### 🔌 Hardware Setup

* Assemble chassis and motors
* Connect ESP32 with motor driver
* Attach ultrasonic sensor
* Setup ESP32-CAM module

---

### 💻 Software Setup

```id="3bxycn"
# Upload code using Arduino IDE
Board: ESP32 Dev Module
Port: Select your COM port
```

---

### 📱 Usage

1. Power ON the rover
2. Connect to WiFi → **RoverCar**
3. Open browser → `http://192.168.4.1`
4. Control using on-screen buttons

---

## 🎮 Controls

| Action   | Command |
| -------- | ------- |
| Forward  | /F      |
| Backward | /B      |
| Left     | /L      |
| Right    | /R      |
| Stop     | /S      |

---

## 📷 FPV Streaming

* Upload ESP32-CAM example code
* Connect to same network
* Open camera IP
* View **live feed in browser**

---

## 📊 Applications

* 🔍 Surveillance Systems
* 🚑 Rescue Robotics
* 🪖 Defense & Recon
* 🤖 Smart Robotics Projects
* 🌆 Smart City Monitoring

---

## ⚡ Performance Highlights

* ⏱️ Real-time control response
* 📡 Stable WiFi communication
* 🚧 Reliable obstacle detection
* 🔋 Efficient power usage

---

## ⚠️ Limitations

* Limited range (WiFi dependent)
* No AI-based detection (yet)
* Battery backup constraints

---

## 🔮 Future Enhancements

* 🤖 AI Object Detection (YOLO / OpenCV)
* 📱 Dedicated Mobile App
* 🛰️ GPS Tracking System
* 🎙️ Voice Command Integration
* 🌙 Night Vision Upgrade

---

## 📁 Project Structure

```id="q80v2t"
Advanced-Smart-Rover
├── src/
├── docs/
├── hardware/
├── report/
├── assets/
└── README.md
```

---

## 👨‍💻 Author

**Debjit Hazra**
🎓 Electronics & Communication Engineering
💡 Passionate about Robotics, IoT & Embedded Systems

---

## 🌐 Connect With Me

* LinkedIn: *(https://www.linkedin.com/in/debjit-hazra-a0a782370/)*
* GitHub: *(https://github.com/DebjitHazra01)*

---

## ⭐ Support

If you found this project useful:
⭐ Star this repository
🍴 Fork and build your own version
📢 Share with others

---

## 📜 License

This project is open-source and available under the **MIT License**.

---
