#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	long double n = 0,de = 0;
	char e;
	int k = 0,in = 0,i = 0,N = 0,a[100] = {0};
	scanf("%Lf %c %d",&n,&e,&k);
	printf("%Lf\n",n);
	in = n;
	printf("%d\n",in);
	de = n-in;
	printf("%Lf\n",in);
	N = log(n);
	for(i = 0;i <= N;i++){
		a[N-i] = in%10;
		in /=10;
	}
	for(i = 0;i <= 98-N;i++){
		a[N+1+i] = (int)de*10;
		de = de*10-(int)de*10;
	}
	
	for(i = 0;i <= N+e;i++){
		printf("%d",a[i]);
	}
	printf(".");
	for(i = N+e+1;i <= N+e+9;i++){
		printf("%d",a[i]);
	}
	return 0;
}

