#include <Arduino.h>

class LED {

  public:
    enum State : byte {
      
      OFF,
      ON,
      BLINK
    };

  private:
    byte pin;
    State state = OFF;
    bool isOn = false;
    unsigned long blinkMillis = 0;
    unsigned long previousMillis = 0;

  public:
    LED(byte pin) {
      this->pin=pin;
      pinMode(pin, OUTPUT);
      turnOff();
    }

    void setState(State newState) {
      state = newState;

      switch (state) {
        case OFF:
          turnOff();
          break;

        case ON:
          turnOn();
          break;

        case BLINK:
          if (blinkMillis == 0) {
            state = OFF;
            turnOff();
            return;
          }
          turnOff();
          previousMillis = millis();
          break;
      }
    }

    void setBlinksPerSecond(byte blinksPerSecond) {
      if (blinksPerSecond == 0) {
        blinkMillis = 0;
        return;
      }
      blinkMillis = 1000UL / blinksPerSecond;
    }

    void update() {
      if (state != BLINK) return;
      unsigned long currentMillis = millis();
      if (currentMillis - previousMillis >= blinkMillis) {
        previousMillis = currentMillis;
        toggle();
      }
    }

  private:
    void toggle() {
      isOn = !isOn;
      digitalWrite(pin, isOn ? HIGH : LOW);
    }

    void turnOn() {
      isOn = true;
      digitalWrite(pin, HIGH);
    }

    void turnOff() {
      isOn = false;
      digitalWrite(pin, LOW);
    }
};