# Övningsprojekt – DS3231 Clock & OLED Display

## 📘 Description
This Arduino project uses a **DS3231 Real-Time Clock (RTC)** module to measure and display the current time on a **SSD1306 OLED** screen.  
Additionally, it reads the **temperature** from the DS3231 and (optionally) maps that value to a **9g servo motor** position.  

The goal of the project is to practice working with I²C communication, external sensors, and graphical display output.

---

## 🧑‍💻 Author
**Name:** Victor Huke  
**Date:** 2025-10-08  
**Project Type:** Learning / Practice Project  

---

## ⚙️ Features
- Reads real-time clock data (hours, minutes, seconds)
- Displays the current time on a 128x64 OLED display
- Reads and displays temperature from the DS3231 sensor
- (Planned) Maps temperature to a servo motor position

---

## 🧩 Components Used
| Component | Description |
|------------|-------------|
| Arduino Board | Any standard board (e.g., Uno, Nano, etc.) |
| DS3231 RTC Module | Keeps track of time and temperature |
| SSD1306 OLED Display | 128x64 pixel display for visual output |
| 9g Servo Motor | (Optional) Used to indicate temperature physically |
| Jumper Wires | For connections |
| Breadboard | For prototyping |

---

## 📦 Required Libraries
Make sure to install the following libraries in your Arduino IDE:

- `RTClib`  
- `Wire`  
- `U8glib`

You can install them via **Sketch → Include Library → Manage Libraries...**

---

## 🔌 Wiring Overview
| DS3231 Pin | Arduino Pin |
|-------------|-------------|
| VCC | 5V |
| GND | GND |
| SDA | A4 |
| SCL | A5 |

| OLED Pin | Arduino Pin |
|-----------|-------------|
| VCC | 5V |
| GND | GND |
| SDA | A4 |
| SCL | A5 |

---

## 🚀 How It Works
1. The Arduino initializes communication with the DS3231 and OLED.
2. The real-time clock is synchronized with the current compile time.
3. The time and temperature are continuously read.
4. The OLED display shows both the **time** and **temperature**.
5. (Planned) The servo motor will move based on the measured temperature.

---

## 🧠 Code Overview
Main functions in the code:

| Function | Description |
|-----------|-------------|
| `getTime()` | Reads and returns current time from DS3231 as a formatted string. |
| `getTemp()` | Reads and returns the temperature as a string. |
| `oledWrite(time, temp)` | Displays both time and temperature on the OLED. |
| `servoWrite(value)` | (Planned) Maps temperature value to servo angle. |

---

## 🧪 Example Output (Serial Monitor)
```
12:04:37
12:04:38
12:04:39
```

OLED display shows:

```
Time: 12:04:39
Temp: 24.5 °C
```

---

## 🛠️ Future Improvements
- Complete the `servoWrite()` function to control the servo motor.  
- Add better formatting for the OLED text layout.  
- Display date along with time.  
- Include Fahrenheit conversion option.

---

## 📄 License
This project is open-source and free to modify for educational purposes.

---

### 🕒 Enjoy building and experimenting with embedded electronics!
