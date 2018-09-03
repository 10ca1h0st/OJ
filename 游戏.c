#include<stdio.h>



int main(){
	int n,k,i,j,m,l;
	scanf("%d %d",&n,&k);
	if(n<1 || n>1000 || k<1 || k>1000)
		return -1;
	int a[n];
	m=0,l=1;

	for(i=0,j=0;i!=-1;i++){
		if(j>=n)
			j=0;
		if(a[j]==0 && i>=n){
			j++;
			continue;			
		}

		a[j]=l;
		if(m>=n-1)
			break;

		if(a[j]%10==k || a[j]%k==0){
			a[j]=0;
			m++;
		}
		l++;
		j++;
//		printf("a[%d]=%d  %d\n",j-1,a[j-1],m);
	}
/*	printf("\n\n");
	for(i=0;i<n;i++){
		printf("a[%d]=%d\n",i,a[i]);
	}
*/	
	for(i=0;i<n;i++){
		if(a[i]!=0)
			break;
	}
	printf("%d",i+1);
	return 0;
}
