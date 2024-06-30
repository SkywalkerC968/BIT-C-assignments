#include <stdio.h>
#include <math.h>

int main() {
	int F = 0;
	long long N = 0,i = 0,j = 0;
	scanf("%lld",&N);
	for(i = N;i > 0;i--){
		F = 0;
		for(j = 2;j <= sqrt(i);j++){
			if(i%j == 0){
				F = 1;
				break;
			}
		}
		if(F == 0){
			printf("The max prime number is %lld.\n",i);
			break;
		}
	}
	return 0;
}

