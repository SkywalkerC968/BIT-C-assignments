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
	int n,i,j,res[41] = {0};
	scanf("%o",&n);
	for(j = 0;n;j++){
		for(i = 0;i < 4;n>>=1,i++){
			if(n&1)res[j] += power(2,i);
		}
	}
	for(j--;j >= 0;j--){
		if(res[j]>=10){
			for(i = 0;i < 6;i++)if(res[j] == alpha[i].input)putchar(alpha[i].output);
		}
		else putchar(res[j]+48);
	}
	return 0;
}

