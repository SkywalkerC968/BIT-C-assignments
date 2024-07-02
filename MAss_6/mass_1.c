#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int i = 0,j = 0,k = 0,n = 0;
	scanf("%d",&n);
	for(;i < n;i++){
		for(j = 0;j < n;j++){
			printf("%3d",j + i*n + 1);
		}
		printf("\n");
	}
	return 0;
}

