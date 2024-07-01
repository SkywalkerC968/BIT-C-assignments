#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int max(int a[],int i){
	int max = 0,j = 0;
	for(j = 0;j < i-1;j++){
		max = max > a[j] ? max : a[j];
	}
	return max;
}

int min(int a[],int i){
	int min = 0,j = 0;
	for(j = 0;j < i-1;i++){
		min = min < a[j] ? min : a[j];
	}
	return min;
}

int main() {
	int a[41] ,n = 0,N = 0,i = 0;
	char op;
	while(scanf("%d,",&a[i]))i++;//“+”被scanf消耗。无法再次被读入。 
	scanf(",%c",&op);
//	a[i] = op;
	printf("%c\n",op);
	printf("%d\n",i);
	printf("%d",a[5]);
	switch(a[i]){
		case 43:
			n = min(a,i);
			N = max(a,i);
			if(n < 0)printf("%d + (%d) = %d\n",N,n,N+n);
			else printf("%d + %d = %d\n",N,n,N+n);
			break;
		case 45:
			n = min(a,i);
			N = max(a,i);
			if(n < 0)printf("%d - (%d) = %d\n",N,n,N-n);
			else printf("%d - %d = %d\n",N,n,N-n);
			break;
		case 42:
			n = min(a,i);
			N = max(a,i);
			if(n < 0)printf("%d * (%d) = %d\n",N,n,N*n);
			else printf("%d * %d = %d\n",N,n,N*n);
			break;
		case 47:
			n = min(a,i);
			N = max(a,i);
			if(n < 0)printf("%d / (%d) = %d\n",N,n,N/n);
			else printf("%d / %d = %d\n",N,n,N/n);
			break;
		case 37:
			n = min(a,i);
			N = max(a,i);
			if(n < 0)printf("%d % (%d) = %d\n",N,n,N%n);
			else printf("%d % %d = %d\n",N,n,N%n);
			break;
	}
	
	return 0;
}

