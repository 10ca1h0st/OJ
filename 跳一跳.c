/*
* AUTHOR:Ren Xujie
* DATE:2018-6-22
* CODE DESCRIPTION:跳一跳规则如下：玩家每次从当前方块跳到下一个方块，如果没有跳到下一个方块上则游戏结束。
* 		   如果跳到了方块上，但没有跳到方块的中心则获得1分；跳到方块中心时，若上一次的得分为1分或这是本局游戏的第一次跳跃则此次得分为2分，否则此次得分比上一次得分多两分（即连续跳到方块中心时，总得分将+2，+4，+6，+8...）。
* 		   现在给出一个人跳一跳的全过程，请你求出他本局游戏的得分（按照题目描述的规则）。
*/

#include<stdio.h>

int main(){
	int arr[30];
	int a,i=0;
	while(scanf("%d",&a)){
		if(a <= 0 || a>2)
			break;
		else{
			arr[i]=a;
//			printf("%d\n",arr[i]);
			i++;
		}
	}
	int score=0,j=0;
	for(;j<i;j++){
//		printf("arr=%d\n",arr[j]);
//		score=score+arr[j];
		if(arr[j]==1){
			score+=1;
			a=0;
		}
		else if(arr[j]==2){
			a+=2;
			score+=a;
		}
	}
	printf("%d",score);
	return 0;
}
