# CodeAlpha IoT Internship - Professional Submission Matrix

This repository contains my individual technical submissions for the Internet of Things (IoT) Virtual Internship at CodeAlpha. The projects demonstrate hands-on experience in biological telemetry research, simulation design, and hardware-to-cloud IoT integration.

---

## 📂 Repository Infrastructure

* **TASK_1_REPORT/**
  * `RESEARCH REPORT Iot Internship.pdf` — Advanced In-Depth Medical Telemetry Report
* **Task_2_sensor_simulation/**
  * `code.ino` — Core Firmware Code for Arduino Uno
  * `Safe_State.png` — Standby Monitoring Log
  * `Alert_State.png` — Motion Detected Diagnostic Capture
* **Task_3_hardware_prototype/**
  * `IOT_WEATHERCODE.ino` — Live Firmware for NodeMCU ESP8266
  * `hardware iot weather.jpeg` — Physical System Interfacing Setup
  * `Screenshot 2026-06-21 002957.png` — Real-Time Cloud Tracking Analytics
  * `Screenshot 2026-06-21 003024.png` — Live Metrics Ingestion Log
* `README.md` — Global Documentation Center

---

## 📑 Task 1: Research Report – IoT in Healthcare Monitoring Systems

* **Objective:** Investigated the multi-tier architectural framework of the Internet of Things (IoT) within modern clinical telemetry environments.
* **Core Artifact:** A formal engineering research report mapping structural layers (Perception, Network, Application), vital physiological signal ingestion (Cardiac volume tracking, Thermal profiling, and Inertial rest dynamics), data security protocols, and real-time edge alerting mechanics.
* **Submission Format:** Compiled Academic PDF Document.

---

## 🛠️ Task 2: Sensor-Based Simulation (Edge Motion Interfacing System)

* **Environment Tool:** Tinkercad Virtual Core Environment.
* **Architecture Layout:** Developed an intelligent intrusion response unit linking a Passive Infrared (PIR) Motion Tracking Sensor to an Arduino Uno R3 processing chip.
* **Control Mechanism:** The firmware uses rapid digital pin polling to instantly activate a localized high-visibility Red LED matrix and a 1kHz acoustic Piezo buzzer pulse array when target motion breaks spatial boundaries.

---

## ☁️ Task 3: IoT Physical Prototype (Cloud Weather Station Monitoring Node)

* **Objective:** Designed and deployed a physical edge-to-cloud environmental monitoring station to measure and stream ambient variables wirelessly over local networks.
* **Hardware Modules:** NodeMCU ESP8266 Wi-Fi System-on-Chip (SoC) & a high-precision DHT11 Sensor matrix.
* **Cloud Infrastructure:** ThingSpeak IoT Analytics Web Dashboard Interface.
* **Firmware Flow:** The system continuously parses physical variables into structured data streams, outputs logs locally to the hardware Serial Monitor dashboard at a 115200 Baud rate, and utilizes an HTTP POST API layer to push live telemetry data packets to the cloud database every 16 seconds to plot dynamic charts.

### 🔌 Physical Circuit Wiring Map

| Component Module | Pin Out Name | Target NodeMCU Pin | Functional Target |
| :--- | :--- | :--- | :--- |
| **DHT11 Sensor** | VCC (+) | **3V3** | 3.3V Hardware Voltage Rail |
| **DHT11 Sensor** | DATA (S) | **D2 (GPIO4)** | High-Frequency Telemetry Signal Input |
| **DHT11 Sensor** | GND (-) | **GND** | Complete Common Ground Loop Reference |

---

## 👤 Engineering Professional & Developer

All underlying technical architecture design, micro-controller code development, circuit layout mapping, and system integration verification tasks were single-handedly executed by:

* **Shaikh Suleman Daud** (Electronics and Telecommunication Engineering Student)

---

## 📜 Legal Disclaimer & License

This open-source documentation and engineering library are developed strictly as a validation checkpoint for the **CodeAlpha Technical Internship Program**. All source strings, flow charts, and telemetry maps are open for academic evaluation and research prototyping cycles.
