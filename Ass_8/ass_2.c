#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int n = 0,i = 0,j = 0,k = 0,l = 0,flag = 0,M[41][41] = {0};
	scanf("%d",&n);
	int p = 0,q = n*n+1;
	for(i = 0,j = 0,k = n-1,l = n-1;i+j <= n-1 || k+l >= n-1;){
		if(i == 0 && k == n-1){
			flag = 0;
			M[i][j] = ++p;
			M[k][l] = --q;
			j++;
			l--;
		}
		if(j == 0 && l == n-1){
			flag = 1;
			M[i][j] = ++p;
			M[k][l] = --q;
			i++;
			k--;
		}
		if(flag){
			M[i][j] = ++p;
			M[k][l] = --q;
			i--;
			j++;
			k++;
			l--;
		}
		else{
			M[i][j] = ++p;
			M[k][l] = --q;
			i++;
			j--;
			k--;
			l++;
		}
	}
	for(i = 0;i < n;i++){
		for(j = 0;j < n-1;j++){
			printf("%2d ",M[i][j]);
		}
		printf("%2d\n",M[i][j]);
	}
	return 0;
}

