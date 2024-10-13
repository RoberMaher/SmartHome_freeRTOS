/*
 * LED_prog.c
 *
 * Created: 9/26/2024 11:05:32 AM
 *  Author: Rober Maher
 */ 
#include "../../LIB/STD_TYPE.h"
#include "../../LIB/BIT_MATH.h"

#include "../../MCAL/DIO/DIO_interface.h"

#include "LED_reg.h"
#include "LED_interface.h"


void LED_voidOnLed(u8 copy_u8port, u8 copy_u8pin){
	DIO_voidSetPinVal(copy_u8port,copy_u8pin,HIGH);
}

void LED_voidOffLed(u8 copy_u8port, u8 copy_u8pin){
		DIO_voidSetPinVal(copy_u8port,copy_u8pin,LOW);
}

void LED_voidToggleLed(u8 copy_u8port, u8 copy_u8pin);