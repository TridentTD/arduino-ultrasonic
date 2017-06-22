

#include "Ultrasonic.h"

#ifdef __cplusplus
extern "C"
{
#endif

Ultrasonic    *mgos_ultrasonic_create(uint8_t trigger_pin, uint8_t echo_pin);
void           mgos_ultrasonic_close(NewPing *ultra);
unsigned int   mgos_ultrasonic_distanceRead(NewPing *ultra);

#ifdef __cplusplus
}
#endif  /* __cplusplus */
