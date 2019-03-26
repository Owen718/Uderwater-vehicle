#ifndef _FLASH_H_
#define _FLASH_H_

#define FLIGHT_PARAMETER_TABLE_NUM  60

#include "sys.h"

typedef enum
{
		VEHICLE_MODE_A,              //����ģʽ
		DEBUG_TOOL_A,                //Debug����
		
		ROBOTIC_ARM_OPEN_VALUE_A,    //��е�ۿ������ֵ  
		ROBOTIC_ARM_CLOSE_VALUE_A,   //��е�۹ر�ֵ
		ROBOTIC_ARM_CURRENT_VALUE_A, //��е�۵�ǰֵ
		
		YUNTAI_OPEN_VALUE_A,    	 //��̨�������ǰֵ
		YUNTAI_CLOSE_VALUE_A,	 		 //��̨���µ�ǰֵ	
		YUNTAI_CURRENT_VALUE_A,    //��̨��ǰֵ
	
		PropellerParamter_MED_A,   //�ƽ�����ֵ
		PropellerParamter_MAX_A,   //�ƽ�����ת���ֵ
		PropellerParamter_MIN_A,   //�ƽ�����ת���ֵ
		
		PARAMEMER_MAX_NUMBER_A,    //������ֵ
	
}NORMAL_PARAMETER_TABLE;


typedef enum //FLASH ��ַaddressö��
{
		PID1_PARAMETER_KP,
		PID1_PARAMETER_KI,
		PID1_PARAMETER_KD,
		PID2_PARAMETER_KP,
		PID2_PARAMETER_KI,
		PID2_PARAMETER_KD,
		PID3_PARAMETER_KP,
		PID3_PARAMETER_KI,
		PID3_PARAMETER_KD,
		PID4_PARAMETER_KP,
		PID4_PARAMETER_KI,
		PID4_PARAMETER_KD,
		PID5_PARAMETER_KP,
		PID5_PARAMETER_KI,
		PID5_PARAMETER_KD,
		PID6_PARAMETER_KP,
		PID6_PARAMETER_KI,
		PID6_PARAMETER_KD,
		PID7_PARAMETER_KP,
		PID7_PARAMETER_KI,
		PID7_PARAMETER_KD,
		PID8_PARAMETER_KP,
		PID8_PARAMETER_KI,
		PID8_PARAMETER_KD,   //��ַö��
	

}IMPORTANT_PARAMETER_TABLE;

void Parameter_SelfCheck(u32 *RealParameter,u32 TempParameter);
void Normal_Parameter_SelfCheck_With_Flash(void); //Flash�����Լ� ��Ϊ-1 �� 0 ��Ϊ ���������� 
/* FLASH ���� ��ֵͨ */
void Flash_Update(void);

int Nor_Paramter_Init_With_Flash(void);
															 
void Save_PID_Parameter(void);			
															 
#endif


