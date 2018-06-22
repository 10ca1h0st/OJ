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
