#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int n = 1,m = 1,i = 0,j = 0,k = 1;
	
	while(1){
		int M[102][102] = {0};
		char boom;
		scanf("%d%d",&n,&m);
		boom = getchar();
		if(n | m && k == 1){
			for(i = 1;i <= n;i++){
				for(j = 1;j <= m+1;j++){
					boom = getchar();

					if(boom == '*'){
						if(M[i-1][j-1] != '*'-'0')M[i-1][j-1]++;
						if(M[i-1][j] != '*'-'0')M[i-1][j]++;
						if(M[i-1][j+1] != '*'-'0')M[i-1][j+1]++;
						if(M[i][j-1] != '*'-'0')M[i][j-1]++;
						M[i][j+1]++;//一颗雷的右方和下方的四个位置是不需要判断是否为雷的 
						M[i+1][j-1]++;
						M[i+1][j]++;
						M[i+1][j+1]++;
						M[i][j] = '*'-'0';
					}	
				}
			}
			printf("Field #%d:\n",k);
			for(i = 1;i <= n;i++){
				for(j = 1;j <= m;j++){
					putchar(M[i][j]+'0');				
				}
				printf("\n");		
			}
			k++;
		} 
		else if(n | m && k != 1){
			putchar(boom);
			for(i = 1;i <= n;i++){
				for(j = 1;j <= m+1;j++){
					boom = getchar();

					if(boom == '*'){
						if(M[i-1][j-1] != '*'-'0')M[i-1][j-1]++;
						if(M[i-1][j] != '*'-'0')M[i-1][j]++;
						if(M[i-1][j+1] != '*'-'0')M[i-1][j+1]++;
						if(M[i][j-1] != '*'-'0')M[i][j-1]++;
						M[i][j+1]++;//一颗雷的右方和下方的四个位置是不需要判断是否为雷的 
						M[i+1][j-1]++;
						M[i+1][j]++;
						M[i+1][j+1]++;
						M[i][j] = '*'-'0';
					}	
				}
			}
			printf("Field #%d:\n",k);
			for(i = 1;i <= n;i++){
				for(j = 1;j <= m;j++){
					putchar(M[i][j]+'0');				
				}
				printf("\n");		
			}
			k++;
		}
		else break;
	}
	return 0;
}

