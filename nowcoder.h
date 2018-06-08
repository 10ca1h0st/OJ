#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//start

void replaceSpace(char *str, int length);
int countSpace(char *str, int length);

void replaceSpace(char *str, int length) {
	printf("replace before:%s\n", str);
	char space = ' ';
	char replace[] = {'%','2','0'};
	int count = countSpace(str, length);
	int count_2 = count;
	char *new_str = (char*)malloc(sizeof(char)*(length + count * 2));
	int i = 0;
	for (i = 0; i < length; i++) {
		if (*(str + i) == space) {
			*(new_str + i + (count - count_2) * 2) = replace[0];
			*(new_str + i + 1 + (count - count_2) * 2) = replace[1];
			*(new_str + i + 2 + (count - count_2) * 2) = replace[2];
			count_2--;
		}
		else {
			*(new_str + i + (count - count_2) * 2) = *(str + i);
		}
	}
	str = new_str;
	*(str + length + count * 2) = 0;
	//printf("space number : %d\n", count);
	printf("replace after:%s\n", str);
}

//123 5 7
//123%205%20

int countSpace(char *str, int length) {
	char space = ' ';
	int i = 0;
	int count = 0;
	for (i = 0; i < length; i++) {
		if (*(str + i) == space) {
			count++;
		}
	}
	return count;
}

//end