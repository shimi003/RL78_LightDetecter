/***********************************************************************************************************************
* DISCLAIMER
* This software is supplied by Renesas Electronics Corporation and is only intended for use with Renesas products.
* No other uses are authorized. This software is owned by Renesas Electronics Corporation and is protected under all
* applicable laws, including copyright laws. 
* THIS SOFTWARE IS PROVIDED "AS IS" AND RENESAS MAKES NO WARRANTIES REGARDING THIS SOFTWARE, WHETHER EXPRESS, IMPLIED
* OR STATUTORY, INCLUDING BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
* NON-INFRINGEMENT.  ALL SUCH WARRANTIES ARE EXPRESSLY DISCLAIMED.TO THE MAXIMUM EXTENT PERMITTED NOT PROHIBITED BY
* LAW, NEITHER RENESAS ELECTRONICS CORPORATION NOR ANY OF ITS AFFILIATED COMPANIES SHALL BE LIABLE FOR ANY DIRECT,
* INDIRECT, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES FOR ANY REASON RELATED TO THIS SOFTWARE, EVEN IF RENESAS OR
* ITS AFFILIATES HAVE BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.
* Renesas reserves the right, without notice, to make changes to this software and to discontinue the availability 
* of this software. By using this software, you agree to the additional terms and conditions found by accessing the 
* following link:
* http://www.renesas.com/disclaimer
*
* Copyright (C) 2011, 2018 Renesas Electronics Corporation. All rights reserved.
***********************************************************************************************************************/

/***********************************************************************************************************************
* File Name    : r_main.c
* Version      : CodeGenerator for RL78/G13 V2.05.03.01 [12 Nov 2018]
* Device(s)    : R5F1006A
* Tool-Chain   : CCRL
* Description  : This file implements main function.
* Creation Date: 2021/01/06
***********************************************************************************************************************/

/***********************************************************************************************************************
Includes
***********************************************************************************************************************/
#include "r_cg_macrodriver.h"
#include "r_cg_cgc.h"
#include "r_cg_port.h"
#include "r_cg_adc.h"
#include "r_cg_timer.h"
/* Start user code for include. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */
#include "r_cg_userdefine.h"

/***********************************************************************************************************************
Pragma directive
***********************************************************************************************************************/
/* Start user code for pragma. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
Global variables and functions
***********************************************************************************************************************/
/* Start user code for global. Do not edit comment generated here */
#define DO_PWR_ON	P0_bit.no0
#define DO_BZ_LED	P0_bit.no1
#define DO_BZ		P1_bit.no1

#define DI_TACTSW	P13_bit.no7

// 
#define THRESHOLD 50

#define LED_ON	0
#define LED_OFF	1

#define BZ_ON	1
#define BZ_OFF	0

// return 1 if di change state
unsigned char checkdi(void){
	static unsigned char beforestate = 0;
	static unsigned char count = 0;
	if(DI_TACTSW != beforestate){
		if(count >= 100){
			count = 0;
			beforestate = DI_TACTSW;
			return 1;
		}
		else{
			count++;
			return 0;
		}
	}
	else{
		count = 0;
	}
}

void main_loop(void);

unsigned char  g_uc_Status;
unsigned short g_uh_CurrentLxAdcValue;
unsigned short g_uh_ResentLxAdcValue;

typedef enum{
	ST_NONE = 0,
	ST_ADC,
	ST_JUDGE,
	ST_OUT,
};

/* End user code. Do not edit comment generated here */
void R_MAIN_UserInit(void);

/***********************************************************************************************************************
* Function Name: main
* Description  : This function implements main function.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void main(void)
{
    R_MAIN_UserInit();
    /* Start user code. Do not edit comment generated here */
	DO_PWR_ON = LED_ON;
    while (1U)
    {
        main_loop();
    }
    /* End user code. Do not edit comment generated here */
}

/***********************************************************************************************************************
* Function Name: R_MAIN_UserInit
* Description  : This function adds user code before implementing main function.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_MAIN_UserInit(void)
{
    /* Start user code. Do not edit comment generated here */
	R_ADC_Set_OperationOn();
    EI();
	g_uc_Status = ST_NONE;
    /* End user code. Do not edit comment generated here */
}

/* Start user code for adding. Do not edit comment generated here */
void main_loop(void){

	static di = 0;

	// di check and switch bz-on/off
	if(checkdi()){
		di = DI_TACTSW;
		if(di == 1){
			// __TODO__
				// switch buzzer-on/off
				// switch led 3 on/off
		}
	}

	switch(g_uc_Status){
		
		// first
		case ST_NONE:
			g_uh_CurrentLxAdcValue = 0;
			g_uh_ResentLxAdcValue  = 0;
			g_uc_Status = ST_ADC;
			break;

		// start adc
		case ST_ADC:
			R_ADC_Start();
			g_uc_Status = ST_JUDGE;
			// sleep to 200ms until complite adc
			R_TAU0_Channel0_Start();
			__halt();
			break;
		
		case ST_JUDGE:
			 R_ADC_Get_Result((uint16_t *const)&g_uh_CurrentLxAdcValue);

			// 初回 過去値に初期値代入
			if(g_uh_ResentLxAdcValue == 0)
				g_uh_ResentLxAdcValue = g_uh_CurrentLxAdcValue;

			// 明るくなったら
			if(g_uh_CurrentLxAdcValue < (g_uh_ResentLxAdcValue - THRESHOLD)){
				// ブザー停止
				DO_BZ_LED = LED_OFF;
				DO_BZ 	  = BZ_OFF;
				g_uh_ResentLxAdcValue = g_uh_CurrentLxAdcValue;
			}

			// 変化なし
			else if((g_uh_ResentLxAdcValue - THRESHOLD <= g_uh_CurrentLxAdcValue)
				&&  (g_uh_ResentLxAdcValue + THRESHOLD >= g_uh_CurrentLxAdcValue))
			{
				// do nothing
			}

			// 暗くなった
			else{
				// ブザー鳴らす
				DO_BZ_LED = LED_ON;
				DO_BZ 	  = BZ_ON;
				g_uh_ResentLxAdcValue = g_uh_CurrentLxAdcValue;
			}
			g_uc_Status = ST_ADC;  

			break;
		
		// if occued edge, 
	
	}
}
/* End user code. Do not edit comment generated here */
