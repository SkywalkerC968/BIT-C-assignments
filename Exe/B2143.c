#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

struct Alphabet{
	int input;
	char output;
}alpha[]={10,'A',11,'B',12,'C',13,'D',14,'E',15,'F'};

int main() {
	int N,M,i = 0,j;
	int res[41];
	scanf("%d%d",&N,&M);
	while(N){
		res[i++] = N%M;
		N /= M;
	}
	for(i--;i >= 0;i--){
		if(res[i] >= 10){
			for(j = 0;j < 6;j++)if(res[i] == alpha[j].input)putchar(alpha[j].output);
		}
		else putchar(res[i]+48);
	}
	return 0;
}

