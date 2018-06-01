/*
* AUTHOR:Ren Xujie
* DATE:2018-6-1
* CODE DESCRIPTION:RETURN THE SUM OF a AND b WITHOUT ANY ARITHMETICOPERATORS
*/

#include<stdio.h>

int aplusb(int a,int b){
	int c;
	c=a^b;             //计算不进位的相加
	while(b=(a&b)<<1){ //计算进位
	  a=c;
		c=c^b;
	}
	return c;
}


int main(){
	int a,b,c;
	scanf("%d %d",&a,&b);
	c=aplusb(a,b);
	printf("a+b=%d",c);
	return 0;

}
