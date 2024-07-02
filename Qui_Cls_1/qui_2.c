#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
	int i = 0,j = 0,k = 0,n = 0,M[106][106] = {0};
	scanf("%d",&n);
	if(n == 1)printf("1\n");
	else{
		for(;i < (n+1)/2;i++){
			for(j = i;j <= n-i-1;j++){
				M[i][j] = ++k;
			}
			for(j = i+1;j < n-i-1;j++){
				M[j][n-i-1] = ++k;
			}
			for(j = n-i-1;j > i;j--){
				M[n-i-1][j] = ++k;
			}
			for(j = n-i-1;j > i;j--){
				M[j][i] = ++k;
			}
		}
		for(i = 0;i < n;i++){
			for(j = 0;j < n;j++){
				printf("%-3d",M[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}

