#include "IntCtrl.h"
#include "Mcu.h"
#include "Port.h"
#include "DIO.h"
int main(void)
{
	/*MCU_Initialization*/
	Mcu_Init(&Mcu_ConfigTypeStruct);
	Mcu_DistributePllClock();
    Port_Init(Port_Config); /*Port Initialization*/
    IntCtrl_Init(); /*Interrupt Control Initialization*/
	/*Endless loop*/
	while(1){
    /*Wait for an interrupt to occur*/
	}
}
