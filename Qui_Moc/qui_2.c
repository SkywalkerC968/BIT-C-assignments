#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char s[106] = {0},lst[41] = {0};
	gets(s);
	int i = 0,j = 0,tmp = 1,slen = strlen(s);
	for(;i < slen;i++){
		int flag = 1;
		for(j = 0;j < tmp;j++){
			if(lst[j] == s[i]){
				flag = 0;
				break;
			}
		}
		if(flag)lst[tmp++] = s[i];
	}
	for(i = 1;i < tmp;i++){
		printf("%c",lst[i]);
	}
	return 0;
}

