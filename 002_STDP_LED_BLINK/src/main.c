#include "stm32f4xx.h"
#include "stm32f4_discovery.h"

GPIO_InitTypeDef GPIO_InitStruct; //struct tan�ml�yorum ki gp�o verilerimi �ekebileyim


void GPIO_Config()
{
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD, ENABLE);//ledler D portunda

	//D PORTUNUN ��LEMLER�
	GPIO_InitStruct.GPIO_Mode= GPIO_Mode_OUT; //D portu ledler oldu�u i�in ��k�� alaca��z
	GPIO_InitStruct.GPIO_Pin= GPIO_Pin_12 | GPIO_Pin_13| GPIO_Pin_14 | GPIO_Pin_15; //ledlerin ba�l� oldu�u pinler
	GPIO_InitStruct.GPIO_OType= GPIO_OType_PP;
	GPIO_InitStruct.GPIO_PuPd= GPIO_PuPd_NOPULL;
	GPIO_InitStruct.GPIO_Speed= GPIO_Speed_100MHz;

	//D PORTUNU Y�KLEMES�N�N YAPILMASI
	GPIO_Init(GPIOD, &GPIO_InitStruct);

}
int main(void)
{
	GPIO_Config();

  while (1)
  {
	  //b�t�n ledleri yakal�m
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
