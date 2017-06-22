

#include <math.h>
#include "mgos_arduino_ultrasonic.h"

#define MGOS_ULTRASONIC_RES_FAIL -12700

Ultrasonic *mgos_ultrasonic_create(uint8_t trigger_pin, uint8_t echo_pin) {
  return new Ultrasonic(trigger_pin, echo_pin);
}

void mgos_ultrasonic_close(NewPing *ultrasonic) {
  if (ultrasonic != nullptr) {
    delete ultrasonic;
    ultrasonic = nullptr;
  }
}

unsigned long  mgos_ultrasonic_distanceRead(NewPing *ultrasonic) {
  if (ultrasonic == nullptr) return MGOS_NEWPING_RES_FAIL;
  float res = ultrasonic->distanceRead();
  return isnan(res) ? MGOS_NEWPING_RES_FAIL : res;
}
