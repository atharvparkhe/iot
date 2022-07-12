#if defined(ESP32)
#include <WiFi.h>
#include <FirebaseESP32.h>
#elif defined(ESP8266)
#include <ESP8266WiFi.h>
#include <FirebaseESP8266.h>
#endif
#include <addons/TokenHelper.h>
#include <addons/RTDBHelper.h>

// WiFi Credentials
#define WIFI_SSID "*************************"
#define WIFI_PASSWORD "*************************"

// Firebase Credentials
#define API_KEY "*************************"
#define DATABASE_URL "*************************"

// Firebase RTDB Config
FirebaseData fbdo;
FirebaseAuth auth;
FirebaseConfig config;

// Bulb Pins Config
#define bulb_1_pin 18
#define bulb_2_pin 19

// RGB LED Pins Config
#define red_bulb_pin 27
#define green_bulb_pin 26
#define blue_bulb_pin 25

// LED PWM Config
#define freq 5000
#define resolution 8

// PWM channel Config
#define red_led_channel 0
#define green_led_channel 1
#define blue_led_channel 2

// Delcaring variables
int bulb_1_value, bulb_2_value, RGB_value, red_value, green_value, blue_value;


// Setup
void setup(){

  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  config.api_key = API_KEY;
  config.database_url = DATABASE_URL;
  Firebase.begin(DATABASE_URL, API_KEY);
  Firebase.setDoubleDigits(5);

  ledcSetup(red_led_channel, freq, resolution);
  ledcSetup(green_led_channel, freq, resolution);
  ledcSetup(blue_led_channel, freq, resolution);

  pinMode(bulb_1_pin, OUTPUT);
  pinMode(bulb_2_pin, OUTPUT);
  pinMode(2, OUTPUT);

  ledcAttachPin(red_bulb_pin, red_led_channel);
  ledcAttachPin(green_bulb_pin, green_led_channel);
  ledcAttachPin(blue_bulb_pin, blue_led_channel);
}


// Main
void loop(){

  if (Firebase.ready()) {

    digitalWrite(2,HIGH);

// Bulb 1 
    Firebase.getInt(fbdo, "/Bulb/oneIsOn");
    bulb_1_value = fbdo.to<int>();
    if(bulb_1_value == 0){
      digitalWrite(bulb_1_pin,HIGH);
    } else {
      digitalWrite(bulb_1_pin,LOW);
    }

// Bulb 2
    Firebase.getInt(fbdo, "/Bulb/twoIsOn");
    bulb_2_value = fbdo.to<int>();
    if(bulb_2_value == 0){
      digitalWrite(bulb_2_pin,HIGH);
    } else {
      digitalWrite(bulb_2_pin,LOW);
    }

// RGB LED
    Firebase.getInt(fbdo, "/RGB/isOn");
    RGB_value = fbdo.to<int>();
    
    if(RGB_value == 1){
      
      Firebase.getInt(fbdo, "/RGB/Red");
      red_value = fbdo.to<int>();
      Firebase.getInt(fbdo, "/RGB/Green");
      green_value = fbdo.to<int>();
      Firebase.getInt(fbdo, "/RGB/Blue");
      blue_value = fbdo.to<int>();

      ledcWrite(red_led_channel, red_value);
      ledcWrite(green_led_channel, green_value);
      ledcWrite(blue_led_channel, blue_value);
    }
    else {
      ledcWrite(red_led_channel, 0);
      ledcWrite(green_led_channel, 0);
      ledcWrite(blue_led_channel, 0);
    }
  
  }
  else {
    digitalWrite(2,LOW);
    digitalWrite(bulb_1_pin,LOW);
    digitalWrite(bulb_2_pin,LOW);
    ledcWrite(red_led_channel, 0);
    ledcWrite(green_led_channel, 0);
    ledcWrite(blue_led_channel, 0);
  }
}
