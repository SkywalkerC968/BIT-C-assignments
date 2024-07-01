#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int k = 0,flag = 0;

int divi(int n,int N,int tmp){
	int i = 0;
	if(n == N+1){
		if(flag == 1){
			k++;
		}
	}
	else if(n == 1 && N != 0){
		for(i = 1;i <= 9;i++){
			flag = 1;
			divi(n+1,N,i);
		}
	}
	else{
		for(i = 0;i <= 9;i++){
			if((tmp*10 + i)%(n*n) == 0){
				flag = 1;
				divi(n+1,N,tmp*10 + i);
			}
			else{
				flag = 0;
				divi(N+1,N,tmp);
			}
		}
	}
}

int main() {
	int N = 0,tmp= 0;
	scanf("%d",&N);
	
	divi(1,N,tmp);
	
	printf("%d\n",k); 
	return 0;
}


