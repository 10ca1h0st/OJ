#include<stdio.h>
#include<stdlib.h>

void replaceSpace(char *str,int length){
        if(str==NULL)
            return;
        
	    int i=0,countofspace=0;
	
	    for (;str[i]!='\0';){
		    i++;
    		if(str[i]==' ')
	    		countofspace++;
    	}
    	
	    int strlen=i+1;
	
    	if(strlen>=length)
    		return;
	    
    	int finallen=strlen+countofspace*2+1;
	
    	char *strreplace;
        strreplace=str+finallen;
	
    	for(i=0;i>=finallen;i++){		
	    	if(*(str+finallen-i)==' '){
		    	*strreplace--='0';
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
