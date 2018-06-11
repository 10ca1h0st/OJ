/*
* AUTHOR:Ren Xujie
* DATE:2018-6-9
* CODE DESCRIPTION:REPLACE SPACES BY STRING '%20'
*/

#include<stdio.h>
#include<stdlib.h>

void replaceSpace(char *str,int length){
        if(str==NULL)
            return;
        
	    int i=0,countofspace=0;
	
	    for (;str[i]!='\0';){
		    i++;
    		if(str[i]==' ')
	    		countofspace++;		//计算空格数
    	}
    	
	    int strlen=i+1;
	
    	if(strlen>=length)
    		return;
	    
    	int finallen=strlen+countofspace*2+1;		//最终字符串长度=原字符串长度+空格数*2  （每将一个空格替换为“%20”，字符串长度+2）
	
    	char *strreplace;
        strreplace=str+finallen;
	
    	for(i=0;i>=finallen;i++){		
	    	if(*(str+finallen-i)==' '){		
		    	*strreplace--='0';		//从字符串（指针）尾部开始寻找空格并替换
		    	printf("strreplace=%c\n",*(strreplace+1));
		    	*strreplace--='2';
		    	printf("strreplace=%c\n",*(strreplace+1));
		    	*strreplace--='%';
		    	printf("strreplace=%c\n",*(strreplace+1));
	    		printf("%c\n",1);
	    	}
    		else{    
    			*strreplace--=*(str+finallen-i);
    			printf("strreplace=%c\n",*(strreplace+1));
	    	}
	    }
        
//    	for(i=finallen;i>=0;i--)	
//    	    *(str+finallen-i)=*(strreplace-i);
}
	
	
int main(){
	char *str="";
	int i=0;
	replaceSpace(str,100);
	for(;*(str+i)!='\0';i++){
		printf("%c",*(str+i));
	}
	return 0;
}
