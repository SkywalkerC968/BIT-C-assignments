#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int M[41][41] = {1},i = 0,j = 0,m = 0,n = 0;
	scanf("%d",&n);
	for(i = 1;i < n;i++){
		M[i][0] = M[i-1][0] + i;
		for(j = 1;j < n-i+1;j++){
			M[i-1][j] = M[i-1][j-1] + j + i;
		}
	}
	for(i = 0;i < n;i++){
		for(j = 0;j < n-i;j++){
			printf("%3d",M[i][j]);
		}
		printf("\n");
	}
	return 0;
}

