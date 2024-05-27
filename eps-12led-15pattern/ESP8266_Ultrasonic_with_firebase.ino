#include <FirebaseArduino.h>
#include <ESP8266WiFi.h>
#include <SoftwareSerial.h>

#define FIREBASE_HOST "vesak12-81756-default-rtdb.firebaseio.com"
#define FIREBASE_AUTH "NHDbqV2ccOZEKsIHYKwx7DuR1YGQqfQkbp1OK6Yj"
#define WIFI_SSID "4G+ Unlocked Tozed"
#define WIFI_PASSWORD "tozed#540"

SoftwareSerial mySerial(D2, D1); // RX, TX

void setup() {
  Serial.begin(115200);   // For debugging on the ESP8266 serial monitor
  mySerial.begin(9600);    // For communication with Arduino Uno

  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  Serial.print("Connecting to ");
  Serial.println(WIFI_SSID);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println();
  Serial.print("Connected to ");
  Serial.println(WIFI_SSID);

  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);
}

void loop() {
  if (WiFi.status() == WL_CONNECTED) {
    // Fetch the pattern value from Firebase
    String pattern = Firebase.getString("/vesak/pattern");

    if (Firebase.failed()) {
      Serial.print("Firebase get failed: ");
      Serial.println(Firebase.error());
      delay(1000);
      return;
    }

    // Send the pattern to Arduino Uno with a semicolon as a delimiter
    mySerial.print(pattern + ";");

    // Print pattern to serial monitor
    Serial.print("Pattern: ");
    Serial.println(pattern);
  } else {
    Serial.println("WiFi Disconnected");
    delay(1000);
  }

  delay(1000); // Wait for 1 second
}
