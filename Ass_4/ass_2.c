#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int n = 0,i = 0,j = 0,k = 0;
	scanf("%d",&n);
	if(n == 0)printf("\n");
	else if(n == 1)printf("*\n");
	else if(n%2){
		for(i = 1;i <= 2*n-1;i++){
			printf("*");
		}
		printf("\n");
		
		for(i = 2;i < n;i++){
			for(j = 1;j < i;j++){
				printf(" ");
			}
			printf("*");
			for(j = 1;j <= 2*n-1-2*i;j++){
				printf(" ");
			}
			printf("*\n");
		}
		
		for(i = 1;i <= n-1;i++){
			printf(" ");
		}
		printf("*\n");
	}
	else{
		for(i = 1;i <= 2*n-1;i++){
			printf("*");
		}
		printf("\n");
		
		for(i = 2;i < n;i++){
			for(j = 1;j < i;j++){
				printf(" ");
			}
			printf("*");
			for(j = 1;j <= 2*n-1-2*i;j++){
				printf(" ");
			}
			printf("*\n");
		}
		
		for(i = 1;i <= n-1;i++){
			printf(" ");
		}
		printf("*\n");
	}
	return 0;
}

