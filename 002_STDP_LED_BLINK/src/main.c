#include "stm32f4xx.h"
#include "stm32f4_discovery.h"

GPIO_InitTypeDef GPIO_InitStruct; //struct tanýmlýyorum ki gpýo verilerimi çekebileyim


void GPIO_Config()
{
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD, ENABLE);//ledler D portunda

	//D PORTUNUN ÝÞLEMLERÝ
	GPIO_InitStruct.GPIO_Mode= GPIO_Mode_OUT; //D portu ledler olduðu için çýkýþ alacaðýz
	GPIO_InitStruct.GPIO_Pin= GPIO_Pin_12 | GPIO_Pin_13| GPIO_Pin_14 | GPIO_Pin_15; //ledlerin baðlý olduðu pinler
	GPIO_InitStruct.GPIO_OType= GPIO_OType_PP;
	GPIO_InitStruct.GPIO_PuPd= GPIO_PuPd_NOPULL;
	GPIO_InitStruct.GPIO_Speed= GPIO_Speed_100MHz;

	//D PORTUNU YÜKLEMESÝNÝN YAPILMASI
	GPIO_Init(GPIOD, &GPIO_InitStruct);

}
int main(void)
{
	GPIO_Config();

  while (1)
  {
	  //bütün ledleri yakalým
	  GPIO_SetBits(GPIOD, GPIO_Pin_12);
	  GPIO_SetBits(GPIOD, GPIO_Pin_13);
	  GPIO_SetBits(GPIOD, GPIO_Pin_14);
	  GPIO_SetBits(GPIOD, GPIO_Pin_15);

  }
}



void EVAL_AUDIO_TransferComplete_CallBack(uint32_t pBuffer, uint32_t Size){
  /* TODO, implement your code here */
  return;
}

/*
 * Callback used by stm324xg_eval_audio_codec.c.
 * Refer to stm324xg_eval_audio_codec.h for more info.
 */
uint16_t EVAL_AUDIO_GetSampleCallBack(void){
  /* TODO, implement your code here */
  return -1;
}
