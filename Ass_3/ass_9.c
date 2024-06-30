#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int n = 0,i = 0,j = 0;
	scanf("%d",&n);
	for(i = 1;i <= n;i++){
		for(j = 1;j <= n;j++){
			printf("% 3d",j+(i-1)*n);
		}
		printf("\n");
	}
	return 0;
}

