#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int check(char*s,int slen,int i){
	if(s[i] == s[slen-i-1])check(s,slen,i+1);
	else if(i > slen-1-i)return 1;
	else return 0;
}

int main() {
	char ch = getchar(),s[106] = {'\0'};
	int slen = 0,flag = 0,i = 0;
	while(ch != '\n'){
		s[i] = ch;
		ch = getchar();
		i++;
	}
	slen = strlen(s);
	flag = check(s,slen,0);
	if(flag)printf("Yes\n");
	else printf("No\n");
	return 0;
}

