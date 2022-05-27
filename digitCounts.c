/*
* AUTHOR:Ren Xujie
* DATE:2018-6-5
* CODE DESCRIPTION:COUNT THE NUMBER OF k'S BETWEEN 0 AND N. k CAN BE 0 - 9.
*/

#include<stdio.h>
#include<math.h>

    int digitCounts(int k, int n) {
        // write your code here
        int i=0;
	    int j=0;
	    int m,a;
	    int arr[n];
        for(;i<=n;i++){
        arr[i]=i;		//初始化数组
//      printf("%d\n",arr[i]);
        }
      
    	while(k==0){
    		return n/10+1;
		}
		
		for(i=0;i<=n;i++){
			for(a=0;a<=(int)log10(n);a++){		//利用对数计算出数组长度位数，如数组长为15，为2位，长115，为3位
				m=arr[i]/pow(10,((int)log10(n)-a));		//
//				printf("pf=%d,arr=%d\n",m,arr[i]);	
				if((m-k)%10==0){		//对10、100、1000...取余，可得到每一位的值
					j=j+1;
					//printf("j2=%d\n",arr[i]);
				}
			}
		}	
		return j;
    }

int main(){
	int k=0,n=19;
	int c=digitCounts(k,n);
	printf("%d\n",c);
}
