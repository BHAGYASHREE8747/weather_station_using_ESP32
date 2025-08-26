# 🌦️ Weather Station using ESP32
“IoT Weather Station using ESP32, DHT22, BMP180, and Home Assistant”

This is an IoT-based **Weather Station Project** built using the ESP32 microcontroller.  
It measures **temperature, humidity, and pressure** and displays the data on **ThingSpeak Cloud**.  
Additionally, a DIY **Rain Gauge (Pluviometer)** is used with Arduino UNO and LCD to measure rainfall.

---

## 🚀 Features
- Real-time monitoring of Temperature, Humidity, and Pressure
- Wi-Fi enabled ESP32 → uploads data to **ThingSpeak**
- DIY Rain Gauge with LCD to measure rainfall in mm
- Cloud dashboard for remote monitoring
- Low-cost IoT solution

---

## 🛠️ Components Used
- ESP32 Development Board  
- DHT11 / DHT22 Sensor (Temperature & Humidity)  
- BMP180 Sensor (Pressure)  
- Arduino UNO (Rain Gauge)  
- LCD Display (16x2)  
- Hall-effect sensor for Rainfall detection  
- Jumper wires, Breadboard  

---

## 🔧 How It Works
1. Sensors (DHT11, BMP180) collect weather data  
2. ESP32 processes the data and uploads to **ThingSpeak** cloud  
3. DIY Rain Gauge counts water drops using hall sensor + Arduino UNO  
4. Rainfall data displayed on **LCD screen** in mm  
5. User can monitor results via **ThingSpeak Dashboard**  

---
## 📂 Project Structure
Weather-Station-ESP32/
│── code/ # ESP32 + Arduino code files
│── circuit/ # Circuit diagrams
│── docs/ # Project report (PDF)
│── images/ # Setup photos and outputs
│── README.md # Project description

---

## 📸 Circuit Diagrams

![ESP32 Circuit]

![Arduino UNO Rain Gauge Circuit]

---

## 📊 Results
- **ThingSpeak Live Data** (Temperature, Humidity, Pressure)  
- **LCD Rainfall Measurement** (mm of rain)  
---

## 📜 Applications
- Smart Agriculture 🌱  
- Weather Forecasting ⛅  
- Smart City Monitoring 🏙️  
- Home Automation 🏡  
- Healthcare & Environmental Studies  
---

## 📜 License
This project is licensed under the MIT License.

