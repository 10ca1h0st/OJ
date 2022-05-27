/*
* AUTHOR:Ren Xujie
* DATE:2018-6-13
* CODE DESCRIPTION:COUNT THE NUMBER OF WAYS THAT A FROG JUMP ON STEPS,THE FROG CAN JUNMP 1 OR 2 STEPS EVERYT TIME.
*/

/**
*NOTES:本例使用了递归调用的方式计算，消耗的时间可能过多，尤其是当台阶数较多时。因此建议使用两个变量代替跳到前两级台阶的方法数循环计算。
*详细的算法可以参考url:https://www.nowcoder.com/ta/coding-interviews/question-ranking?uuid=8c82a5b80378478f9484d87d1c5f12a4&rp=1&lang=2
**/

#include<stdio.h>

int jumpFloor(int number) {
    if(number <= 3)			//台阶数小于等于3时单独计算
        return number;
    return jumpFloor(number-1)+jumpFloor(number-2);		//跳到每一级台阶的方法数等于跳到前两级台阶的方法数之和

}

int main(){
	int number;
	printf("Please input step height :");
	scanf("%d",&number);
	printf("There are %d ways of jump",jumpFloor(number));
}
