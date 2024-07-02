#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

void reverse(char*s){
	int i,j;
	char tmp;
	for(i = 0,j = strlen(s)-1;i < j;i++,j--){
		tmp = *(s+i);
		*(s+i) = *(s+j);
		*(s+j) = tmp;
	}
}

int main() {
	char line[7000],alpha[1000][7] = {0};
	gets(line);
	int i,j,k,flag,len = strlen(line);
	for(i = 0,j = 0,k = 0,flag = 0;i <= len;i++){
		
		if(line[i] == ' ' || line[i] == '\0'){
			alpha[j][k] = '\0';
			if(flag)reverse(alpha[j]);
			j++;
			k = 0;
			flag = 0;
			continue;
		}
		else if('a'<=line[i]&&line[i]<='z')alpha[j][k++] = line[i]-32;
		else if('A'<=line[i]&&line[i]<='Z')alpha[j][k++] = line[i]+32;
		else {
			flag = 1;
			alpha[j][k++] = line[i];
		}
	}
	for(i = j-1;i >= 0;i--){
		printf("%s ",alpha[i]);
	}
	return 0;
}

