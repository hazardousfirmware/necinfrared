#ifndef __PANASONIC_TX_H__
#define __PANASONIC_TX_H__

#include <stdint.h>

#define PANASONIC_IR_CODE_VOL_DOWN 0X4242
#define PANASONIC_IR_CODE_VOL_UP 0X4040
#define PANASONIC_IR_CODE_POWER 0X7A7A
#define PANASONIC_IR_CODE_AV 0X0A0A

void send_panasonic_ircode(uint16_t code);
void panasonic_register_functions(void (*pwm_on_function)(void), void (*pwm_off_function)(void), void (*delay_us_function)(uint32_t));


#endif //!__PANASONIC_TX_H__