#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char lst[5][41] = {0},tmp[41];
	int i = 0,j = 0;
	for(;i < 5;i++)gets(lst[i]);
	for(i = 0;i < 5;i++){
		for(j = 0;j < 5-i;j++){
			if(strcmp(lst[j],lst[j+1]) <= 0){
				strcpy(tmp,lst[j]);
				strcpy(lst[j],lst[j+1]);
				strcpy(lst[j+1],tmp);
			}
		}
	}
	for(i = 0;i < 5;i++){
		puts(lst[i]);
	}
	return 0;
}

