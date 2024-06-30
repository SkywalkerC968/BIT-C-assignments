#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int n = 0,N = 0,F = 0,i = 0,j = 0,k = 0;
//	可以调用power函数，but还是得多了解了解
	scanf("%d",&n);
	int x[n];
	for(i = power(10,n-1);i < power(10,n);i++){
		N = 0;
		for(j = 0;j < n;j++){
			x[j] = i/power(10,j)%10;
		}
		for(k = 0;k < n;k++){
			N += power(x[k],n);
		}
		//printf("%d\n",N);
		if(N == i){
			F = 1;
			printf("%d\n",i);
		}
	} 
	if(F == 0)printf("No output.\n"); 
	return 0;
}

int power(int x,int y){
	int i = 0,p = 1;
	for(i = 1;i <= y;i++){
		p *= x;
	}
	return p;
}
