#ifndef __ADC_CONVERT_H_
#define __ADC_CONVERT_H_

#include "DataType.h"



//初始化ADC															   
int adc_init(void);

uint16 get_adc(uint8 ch);  //get adc通道值

uint16 get_adc3(uint8 ch); //get adc3通道值

float get_voltage_value(void); //get 电压值

float get_current_value(void);// get电流值 

#endif


