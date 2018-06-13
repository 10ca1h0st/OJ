#include<stdio.h>

int jumpFloor(int number) {
    if(number <= 3)
        return number;
    return jumpFloor(number-1)+jumpFloor(number-2);

}

int main(){
	int number;
	printf("Please input step height :");
	scanf("%d",&number);
	printf("There are %d ways of jump",jumpFloor(number));
}
