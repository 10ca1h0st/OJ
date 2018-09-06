#include<stdio.h>

int main(){
	int n,m,i,j,k,num,pos;
	scanf("%d",&n);
	int form[n],later[n];
	
	for(i=1;i<=n;i++){
		form[i-1]=i;
		later[i-1]=0;
	}
	
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d %d",&num,&pos);
		for(j=0;j<n;j++){
			if(form[j]==num){
				later[j+pos]=form[j];
				if(pos>=0){
					for(k=0;k<pos;k++){
						later[j+k]=form[j+k+1];
					}
				}
				else{
					for(k=pos;k<0;k++){
						later[j+k+1]=form[j+k];
					}
				}
				break;
			}
		}
		for(j=0;j<n;j++){
			if(later[j]==0){
				later[j]=form[j];
			}
			form[j]=later[j];
		}
	}
	

	
	for(i=0;i<n;i++){
		printf("%d ",later[i]);
	}
	return 0;
}
