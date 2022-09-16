#include "motor.h"
#include "gpio.h"


//前进，两个轮子均正转
void goForward(void)
{
    HAL_GPIO_WritePin(left1_GPIO_Port,left1_Pin,GPIO_PIN_SET);
    HAL_GPIO_WritePin(left2_GPIO_Port,left2_Pin,GPIO_PIN_RESET);

    HAL_GPIO_WritePin(right1_GPIO_Port,right1_Pin,GPIO_PIN_RESET);
    HAL_GPIO_WritePin(right2_GPIO_Port,right2_Pin,GPIO_PIN_SET);
}
//后退，与“前进”完全相反
void goBackward(void)
{
	HAL_GPIO_WritePin(left1_GPIO_Port,left1_Pin,GPIO_PIN_RESET);
    HAL_GPIO_WritePin(left2_GPIO_Port,left2_Pin,GPIO_PIN_SET);

    HAL_GPIO_WritePin(right1_GPIO_Port,right1_Pin,GPIO_PIN_SET);
    HAL_GPIO_WritePin(right2_GPIO_Port,right2_Pin,GPIO_PIN_RESET);
}
//右转，左轮正转，右轮反转
void turnRight(void)
{
    HAL_GPIO_WritePin(left1_GPIO_Port,left1_Pin,GPIO_PIN_SET);
    HAL_GPIO_WritePin(left2_GPIO_Port,left2_Pin,GPIO_PIN_RESET);

    HAL_GPIO_WritePin(right1_GPIO_Port,right1_Pin,GPIO_PIN_RESET);
    HAL_GPIO_WritePin(right2_GPIO_Port,right2_Pin,GPIO_PIN_RESET);
}
 
//左转，左轮反转，右轮正转
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
//停止
void STOP(void)
{
	HAL_GPIO_WritePin(left1_GPIO_Port,left1_Pin,GPIO_PIN_RESET);
    HAL_GPIO_WritePin(left2_GPIO_Port,left2_Pin,GPIO_PIN_RESET);

    HAL_GPIO_WritePin(right1_GPIO_Port,right1_Pin,GPIO_PIN_RESET);
    HAL_GPIO_WritePin(right2_GPIO_Port,right2_Pin,GPIO_PIN_RESET);
}
