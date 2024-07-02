#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char voca[500][106],res[50000] = {0};
	int i = 0,j;
	do{
		gets(voca[i]);
		for(j = 0;j < i;j++){
			if(strcmp(voca[j],voca[i]) == 0)i--;
		}
		i++;
		
	}while(voca[i-1][0]-48);
	for(j = 0;j < i-1;j++){
		strcat(res,voca[j]);
	}
	puts(res);
	
	return 0;
}

