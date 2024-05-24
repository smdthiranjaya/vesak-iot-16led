# Firebase Pattern Control System

## Overview

This repository contains the ESP8266 and Arduino Uno codes for fetching real-time pattern values from Firebase and controlling LEDs based on the received patterns.

### Components

1. **ESP8266 Code**: Fetches and sends real-time pattern values from Firebase to an Arduino Uno.
2. **Arduino Uno Code**: Controls LED patterns based on the pattern values received from the ESP8266.

## Setup Instructions

### ESP8266 Code

1. Open the ESP8266 code in the Arduino IDE.
2. Replace the placeholders with your Firebase and Wi-Fi credentials:
   ```cpp
   #define FIREBASE_HOST "YOUR_FIREBASE_HOST"
   #define FIREBASE_AUTH "YOUR_FIREBASE_AUTH"
   #define WIFI_SSID "YOUR_WIFI_SSID"
   #define WIFI_PASSWORD "YOUR_WIFI_PASSWORD"
