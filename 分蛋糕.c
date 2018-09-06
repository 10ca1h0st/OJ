#include<stdio.h>

int main(){
	int n,K,i,m,a[1000];
	scanf("%d %d",&n,&K);
	if(n<1 || n>1000 || K<1 || K>1000){
		return -1;
	}
	
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	m=0;
	
	for(i=0;i<n;i++){
		if(a[i]<K && i!=n-1){
			a[i+1]+=a[i];
		}
		else
			m++;
	}
	printf("%d",m);
	return 0;
}
