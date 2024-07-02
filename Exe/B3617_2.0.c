#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int power(int x,int y){
	int p = 1;
	while(y--){
		p *= x;
	}
	return p;
}

struct Alphabet{
	int input;
	char output;
}alpha[]={10,'a',11,'b',12,'c',13,'d',14,'e',15,'f'};

int main() {
	char s[1010] = {'0','0','0','0'};
	int res[1010] = {0},i = 0,j = 0,tmp = 0;
	scanf("%s",s+4);
	int slen = strlen(s);
	for(i = slen;i >= 4;){
		for(j = 0;j < 4;j++){
			tmp += power(8,j)*(s[--i]^48);
		}
		for(j = 0;j < 3;j++){
			res[j+((slen-i)/4-1)*3] = tmp%16;
			tmp /= 16;
		}
	}
	i = (slen/4+1)*3;
	while(!res[i]&&i>=1)i--;
	for(;i >= 0;i--){
		if(res[i]>=10){
			for(j = 0;j < 6;j++)if(res[i] == alpha[j].input)putchar(alpha[j].output);
		}
		else{
			putchar(res[i]+48);
		} 
	}
	return 0;
}

