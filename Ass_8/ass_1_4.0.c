#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

long long int f[520];

long long int Feb(int n){
	if(f[n])return f[n];
	if(n <= 1)return 1;
	else return f[n] = Feb(n-1) + Feb(n-2);
} 

int main() {
	int a = 0,b = 0;
	long long int i = 0;
	scanf("%d%d",&a,&b);
	i = Feb(b-a);
	printf("%lld\n",i);
	return 0;
}

