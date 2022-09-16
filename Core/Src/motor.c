#include "motor.h"
#include "gpio.h"


//ǰ�����������Ӿ���ת
void goForward(void)
{
    HAL_GPIO_WritePin(left1_GPIO_Port,left1_Pin,GPIO_PIN_SET);
    HAL_GPIO_WritePin(left2_GPIO_Port,left2_Pin,GPIO_PIN_RESET);

    HAL_GPIO_WritePin(right1_GPIO_Port,right1_Pin,GPIO_PIN_RESET);
    HAL_GPIO_WritePin(right2_GPIO_Port,right2_Pin,GPIO_PIN_SET);
}
//���ˣ��롰ǰ������ȫ�෴
void goBackward(void)
{
	HAL_GPIO_WritePin(left1_GPIO_Port,left1_Pin,GPIO_PIN_RESET);
    HAL_GPIO_WritePin(left2_GPIO_Port,left2_Pin,GPIO_PIN_SET);

    HAL_GPIO_WritePin(right1_GPIO_Port,right1_Pin,GPIO_PIN_SET);
    HAL_GPIO_WritePin(right2_GPIO_Port,right2_Pin,GPIO_PIN_RESET);
}
//��ת��������ת�����ַ�ת
void turnRight(void)
{
    HAL_GPIO_WritePin(left1_GPIO_Port,left1_Pin,GPIO_PIN_SET);
    HAL_GPIO_WritePin(left2_GPIO_Port,left2_Pin,GPIO_PIN_RESET);

    HAL_GPIO_WritePin(right1_GPIO_Port,right1_Pin,GPIO_PIN_RESET);
    HAL_GPIO_WritePin(right2_GPIO_Port,right2_Pin,GPIO_PIN_RESET);
}
 
//��ת�����ַ�ת��������ת
void turnLeft(void)
{
    HAL_GPIO_WritePin(left1_GPIO_Port,left1_Pin,GPIO_PIN_RESET);
    HAL_GPIO_WritePin(left2_GPIO_Port,left2_Pin,GPIO_PIN_RESET);

    HAL_GPIO_WritePin(right1_GPIO_Port,right1_Pin,GPIO_PIN_RESET);
    HAL_GPIO_WritePin(right2_GPIO_Port,right2_Pin,GPIO_PIN_SET);
}

void turnRightSharply(void)
{
    HAL_GPIO_WritePin(left1_GPIO_Port,left1_Pin,GPIO_PIN_SET);
    HAL_GPIO_WritePin(left2_GPIO_Port,left2_Pin,GPIO_PIN_RESET);

    HAL_GPIO_WritePin(right1_GPIO_Port,right1_Pin,GPIO_PIN_SET);
    HAL_GPIO_WritePin(right2_GPIO_Port,right2_Pin,GPIO_PIN_RESET);
}
void turnLeftSharply(void)
{
    HAL_GPIO_WritePin(left1_GPIO_Port,left1_Pin,GPIO_PIN_RESET);
    HAL_GPIO_WritePin(left2_GPIO_Port,left2_Pin,GPIO_PIN_SET);

    HAL_GPIO_WritePin(right1_GPIO_Port,right1_Pin,GPIO_PIN_RESET);
    HAL_GPIO_WritePin(right2_GPIO_Port,right2_Pin,GPIO_PIN_SET);
}
//ֹͣ
void STOP(void)
{
	HAL_GPIO_WritePin(left1_GPIO_Port,left1_Pin,GPIO_PIN_RESET);
    HAL_GPIO_WritePin(left2_GPIO_Port,left2_Pin,GPIO_PIN_RESET);

    HAL_GPIO_WritePin(right1_GPIO_Port,right1_Pin,GPIO_PIN_RESET);
    HAL_GPIO_WritePin(right2_GPIO_Port,right2_Pin,GPIO_PIN_RESET);
}
