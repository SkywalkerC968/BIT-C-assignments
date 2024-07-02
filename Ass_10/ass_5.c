#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int N = 0,n = 0,i = 0,round = 0,left = 0;
	scanf("%d%d",&N,&n);
	for(i = 1;i <= N;i++){
		int out = 0,l = 0,tmp = N;
		while(i != out){
			out += n;
			if(out > tmp){
				out %= tmp;	
			}//并未完成淘汰工作 
			l++;
		}
		printf("%d ",l);
		left = l > round ? i : left;
		round = l > round ? l : round;
	}
	printf("%d\n",left);
	return 0;
}

