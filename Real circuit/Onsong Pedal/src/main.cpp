#include <Arduino.h>
#include <BleKeyboard.h>

BleKeyboard keyboard ("Onsong pedal");

#define PEDAL_1_PIN   36 
#define PEDAL_2_PIN   39 
#define PEDAL_3_PIN   34 
#define PEDAL_4_PIN   35 
#define PEDAL_5_PIN   32 
#define PEDAL_6_PIN   33 
#define PEDAL_7_PIN   27 
#define PEDAL_8_PIN   13 
#define SCROLL_PIN    13 
#define DB_DELAY      50

unsigned long pedal_1_last_db_time = 0;
unsigned long pedal_2_last_db_time = 0;
unsigned long pedal_3_last_db_time = 0;
unsigned long pedal_4_last_db_time = 0;
unsigned long pedal_5_last_db_time = 0;
unsigned long pedal_6_last_db_time = 0;
unsigned long pedal_7_last_db_time = 0;
unsigned long pedal_8_last_db_time = 0;
unsigned long scroll_last_db_time = 0;

int pedal_1_state;
int pedal_2_state;
int pedal_3_state;
int pedal_4_state;
int pedal_5_state;
int pedal_6_state;
int pedal_7_state;
int pedal_8_state;
int scroll_state;

int pedal_1_last_state = LOW;
int pedal_2_last_state = LOW;
int pedal_3_last_state = LOW;
int pedal_4_last_state = LOW;
int pedal_5_last_state = LOW;
int pedal_6_last_state = LOW;
int pedal_7_last_state = LOW;
int pedal_8_last_state = LOW;
int scroll_last_state = LOW;

void setup () {
  Serial.begin (115200);

  pinMode (PEDAL_1_PIN, INPUT);
  pinMode (PEDAL_2_PIN, INPUT);
  pinMode (PEDAL_3_PIN, INPUT);
  pinMode (PEDAL_4_PIN, INPUT);
  pinMode (PEDAL_5_PIN, INPUT);
  pinMode (PEDAL_6_PIN, INPUT);
  pinMode (PEDAL_7_PIN, INPUT);
  pinMode (PEDAL_8_PIN, INPUT);
  pinMode (SCROLL_PIN, INPUT);

  Serial.println ("Starting BLE");
  keyboard.begin ();
}

void loop () {
  int pedal_1_reading = digitalRead (PEDAL_1_PIN);
  int pedal_2_reading = digitalRead (PEDAL_2_PIN);
  int pedal_3_reading = digitalRead (PEDAL_3_PIN);
  int pedal_4_reading = digitalRead (PEDAL_4_PIN);
  int pedal_5_reading = digitalRead (PEDAL_5_PIN);
  int pedal_6_reading = digitalRead (PEDAL_6_PIN);
  int pedal_7_reading = digitalRead (PEDAL_7_PIN);
  int pedal_8_reading = digitalRead (PEDAL_8_PIN);

  if (pedal_1_reading != pedal_1_last_state)  pedal_1_last_db_time = millis ();
  if (pedal_2_reading != pedal_2_last_state)  pedal_2_last_db_time = millis ();
  if (pedal_3_reading != pedal_3_last_state)  pedal_3_last_db_time = millis ();
  if (pedal_4_reading != pedal_4_last_state)  pedal_4_last_db_time = millis ();
  if (pedal_5_reading != pedal_5_last_state)  pedal_5_last_db_time = millis ();
  if (pedal_6_reading != pedal_6_last_state)  pedal_6_last_db_time = millis ();
  if (pedal_7_reading != pedal_7_last_state)  pedal_7_last_db_time = millis ();
  if (pedal_8_reading != pedal_8_last_state)  pedal_8_last_db_time = millis ();

  if ((millis () - pedal_1_last_db_time) > DB_DELAY) {
    if (pedal_1_reading != pedal_1_state) {
      pedal_1_state = pedal_1_reading;

      if (pedal_1_state == HIGH) {
        Serial.println ("Sending 'a' character");
        keyboard.print ("a");
      }
    }
  }

  if ((millis () - pedal_2_last_db_time) > DB_DELAY) {
    if (pedal_2_reading != pedal_2_state) {
      pedal_2_state = pedal_2_reading;

      if (pedal_2_state == HIGH) {
        Serial.println ("Sending 'b' character");
        keyboard.print ("b");
      }
    }
  }

  if ((millis () - pedal_3_last_db_time) > DB_DELAY) {
    if (pedal_3_reading != pedal_3_state) {
      pedal_3_state = pedal_3_reading;

      if (pedal_3_state == HIGH) {
        Serial.println ("Sending 'c' character");
        keyboard.print ("a");
      }
    }
  }

  if ((millis () - pedal_4_last_db_time) > DB_DELAY) {
    if (pedal_4_reading != pedal_4_state) {
      pedal_4_state = pedal_4_reading;

      if (pedal_4_state == HIGH) {
        Serial.println ("Sending 'd' character");
        keyboard.print ("e");
      }
    }
  }

  if ((millis () - pedal_5_last_db_time) > DB_DELAY) {
    if (pedal_5_reading != pedal_5_state) {
      pedal_5_state = pedal_5_reading;

      if (pedal_5_state == HIGH) {
        Serial.println ("Sending 'e' character");
        keyboard.print ("e");
      }
    }
  }

  if ((millis () - pedal_6_last_db_time) > DB_DELAY) {
    if (pedal_6_reading != pedal_6_state) {
      pedal_6_state = pedal_6_reading;

      if (pedal_6_state == HIGH) {
        Serial.println ("Sending 'f' character");
        keyboard.print ("f");
      }
    }
  }

  if ((millis () - pedal_7_last_db_time) > DB_DELAY) {
    if (pedal_7_reading != pedal_7_state) {
      pedal_7_state = pedal_7_reading;

      if (pedal_7_state == HIGH) {
        Serial.println ("Sending 'g' character");
        keyboard.print ("g");
      }
    }
  }

  if ((millis () - pedal_8_last_db_time) > DB_DELAY) {
    if (pedal_8_reading != pedal_8_state) {
      pedal_8_state = pedal_8_reading;

      if (pedal_8_state == HIGH) {
        Serial.println ("Sending 'h' character");
        keyboard.print ("h");
      }
    }
  }

  pedal_1_last_state = pedal_1_reading;
  pedal_2_last_state = pedal_2_reading;
  pedal_3_last_state = pedal_3_reading;
  pedal_4_last_state = pedal_4_reading;
  pedal_5_last_state = pedal_5_reading;
  pedal_6_last_state = pedal_6_reading;
  pedal_7_last_state = pedal_7_reading;
  pedal_8_last_state = pedal_8_reading;
}
