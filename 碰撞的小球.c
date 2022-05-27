/*
* AUTHOR:Ren Xujie
* DATE:2018-7-25
* CODE DESCRIPTION:问题描述
*　　			数轴上有一条长度为L（L为偶数)的线段，左端点在原点，右端点在坐标L处。有n个不计体积的小球在线段上，开始时所有的小球都处在偶数坐标上，速度方向向右，速度大小为1单位长度每秒。
*　　			当小球到达线段的端点（左端点或右端点）的时候，会立即向相反的方向移动，速度大小仍然为原来大小。
*　　			当两个小球撞到一起的时候，两个小球会分别向与自己原来移动的方向相反的方向，以原来的速度大小继续移动。
*	　		 现在，告诉你线段的长度L，小球数量n，以及n个小球的初始位置，请你计算t秒之后，各个小球的位置。
* 测试用例：
*	1.输入：3 10 5
*	  	    4 6 8
*	  输出：7 9 9 
*	2.输入：10 22 30
*			14 12 16 6 10 2 8 20 18 4 
*	  输出：6 6 8 2 4 0 4 12 10 2 
*/



#include<stdio.h>

int main(){
	int impactedBalls(int n,int L,int t);
	int n,L,t;
	scanf("%d %d %d",&n,&L,&t);
	impactedBalls(n,L,t);
	return 0;
}

int impactedBalls(int n,int L,int t){
	int test=0;
	if(n<1 || n>100 || t<1 || t>100 || L<2 || L>1000 || L%2!=0){  //限定条件：L长度必须为偶数 
		printf("ERROR");
		return;
	}
	
	int i=0,j,loc[100],stat[100];		//loc数组为每个小球的位置，stat数组为每个小球的运动方向，1代表向正方向运动；-1代表向负方向运动 
	for(;i<n;i++){
		scanf("%d",&j);
		loc[i]=j;
		stat[i]=1;
	}
	
	for(i=0;i<t;i++){
/*-----------test------------测试用 
				printf("%d\n",stat[1]);
				printf("%d\n",loc[1]);
----------------------------*/
		for(j=0;j<n;j++){
			if(loc[j]==L){
				stat[j]=-stat[j];
			}
		}

		for(j=0;j<n;j++){
			if(stat[j]==1){
				loc[j]++;
			}
			else{
				loc[j]--;
			}
		}
		for(j=0;j<n;j++){
			if(loc[j]==0){
				stat[j]=-stat[j];
			}
		} 
		for(test=0;test<n-1;test++){		//遍历数组，目的是查看小球是否发生碰撞，如发生碰撞则使stat取反，即反方向运动 
			for(j=test+1;j<=n-1;j++){
				if(loc[test]==loc[j]){
					stat[test]=-stat[test];
					stat[j]=-stat[j];
				}
			}
		}
	}
	
	for(i=0;i<n;i++){
		printf("%d ",loc[i]);
	}
}
