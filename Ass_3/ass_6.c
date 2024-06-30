#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int n = 0,N = 1;
	scanf("%d",&n);
	if(n == 1)printf("The monkey got 1 peach in first day.\n");
	else{
		for(n;n >= 2;n--){
			N += n-1;
			N *= 2;
		}
		printf("The monkey got %d peaches in first day.\n",N);
	}
	return 0;
}

