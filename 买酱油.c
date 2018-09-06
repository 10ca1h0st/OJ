#include<stdio.h>

int main(){
	int N,f,t,i;
	scanf("%d",&N);
	
	f=N/50;
	t=(N-f*50)/30;
	i=(N-f*50-t*30)/10;
	printf("%d",4*t+7*f+i);
	
	return 0;
}
