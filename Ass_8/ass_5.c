#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int Acc(int n,int m){
	if(n == m)return n;
	else return m + Acc(n,m-1);
}

int main() {
	int n = 0,m = 0;
	scanf("%d%d",&n,&m);
	printf("The sum from %d to %d is %d.\n",n,m,Acc(n,m));
	return 0;
}

