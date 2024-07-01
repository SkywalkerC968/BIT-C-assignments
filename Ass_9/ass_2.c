#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int gcd(int n,int m){
	if(m%n)gcd(m%n,n);
	else return n;
}

int main() {
	int n = 0,m = 0;
	scanf("%d%d",&n,&m);
	printf("%d\n",gcd(n,m));
	
	return 0;
}

