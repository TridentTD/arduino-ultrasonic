

#include <math.h>
#include "mgos_arduino_ultrasonic.h"

#define MGOS_ULTRASONIC_RES_FAIL -12700

Ultrasonic *mgos_ultrasonic_create(uint8_t trigger_pin, uint8_t echo_pin) {
  return new Ultrasonic(trigger_pin, echo_pin);
}

void mgos_ultrasonic_close(Ultrasonic *ultra) {
  if (ultra != nullptr) {
    delete ultra;
    ultra = nullptr;
  }
}

unsigned int  mgos_ultrasonic_distanceRead(Ultrasonic *ultra) {
  if (ultra == nullptr) return MGOS_ULTRASONIC_RES_FAIL;
  float res = ultra->distanceRead();
  return isnan(res) ? MGOS_ULTRASONIC_RES_FAIL : res;
}
