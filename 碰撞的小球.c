/*
* AUTHOR:Ren Xujie
* DATE:2018-7-25
* CODE DESCRIPTION:��������
*����				��������һ������ΪL��LΪż��)���߶Σ���˵���ԭ�㣬�Ҷ˵�������L������n�����������С�����߶��ϣ���ʼʱ���е�С�򶼴���ż�������ϣ��ٶȷ������ң��ٶȴ�СΪ1��λ����ÿ�롣
*����				��С�򵽴��߶εĶ˵㣨��˵���Ҷ˵㣩��ʱ�򣬻��������෴�ķ����ƶ����ٶȴ�С��ȻΪԭ����С��
*����				������С��ײ��һ���ʱ������С���ֱ������Լ�ԭ���ƶ��ķ����෴�ķ�����ԭ�����ٶȴ�С�����ƶ���
*	��		    	���ڣ��������߶εĳ���L��С������n���Լ�n��С��ĳ�ʼλ�ã��������t��֮�󣬸���С���λ�á�
*����������
*	1.���룺3 10 5
*	  	    4 6 8
*	  �����7 9 9 
*	2.���룺10 22 30
*			14 12 16 6 10 2 8 20 18 4 
*	  �����6 6 8 2 4 0 4 12 10 2 
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
	if(n<1 || n>100 || t<1 || t>100 || L<2 || L>1000 || L%2!=0){  //�޶�������L���ȱ���Ϊż�� 
		printf("ERROR");
		return;
	}
	
	int i=0,j,loc[100],stat[100];		//loc����Ϊÿ��С���λ�ã�stat����Ϊÿ��С����˶�����1�������������˶���-1�����򸺷����˶� 
	for(;i<n;i++){
		scanf("%d",&j);
		loc[i]=j;
		stat[i]=1;
	}
	
	for(i=0;i<t;i++){
/*-----------test------------������ 
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
		for(test=0;test<n-1;test++){		//�������飬Ŀ���ǲ鿴С���Ƿ�����ײ���緢����ײ��ʹstatȡ�������������˶� 
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
