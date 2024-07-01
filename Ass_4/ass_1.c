#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int n = 0,i = 0,j = 0,k = 0;
	scanf("%d",&n);
	for(i = n-1;i >= -n+1;i--){
		for(k = abs(i);k > 0;k--){
			printf("  ");
		}
		
		for(j = n;j > abs(i);j--){
			printf("%-2d",j);
		}
		
		for(j = abs(i)+2;j <= n;j++){
			printf("%-2d",j);
		}
		
		printf("\n");
	} 
	return 0;
}

