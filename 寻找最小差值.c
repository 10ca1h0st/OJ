#include<stdio.h>

int main(){
	int n,i,j,k,temp,sub[1000],arr[1000];
	scanf("%d",&n);
	
	if(n<2 || n>1000){
		return -1;
	}
	
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
		if(arr[i]<=0 || arr[i]>10000){
			return -1;
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n-1;j++){
			if(arr[j]<arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
//			printf("arr=%d\n",arr[i]);
		}
	}

/*	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
*/	
	for(i=0;i<n-1;i++){
		sub[i]=arr[i]-arr[i+1];
	}
/*		for(i=0;i<n-1;i++){
		printf("%d ",sub[i]);
	}
*/	
	if(n>2){
		for(i=0;i<n-2;i++){
			for(j=0;j<n-2;j++){
				if(sub[j]>sub[j+1]){
					temp=sub[j];
					sub[j]=sub[j+1];
					sub[j+1]=temp;
				}
			}
		}		
	}
	

	printf("%d",sub[0]);
	return 0;
}
