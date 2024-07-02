#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define lim 106

int main() {
	int n = 0,m = 0,i = 0,j = 0,flag = 1,a[lim] = {0},c[lim] = {0},M[lim][lim] = {0};
	scanf("%d%d",&n,&m);
	for(;i < n;i++){
		for(j = 0;j < m;j++){
			scanf("%d",&M[i][j]);
		}
	}
	for(i = 0;i < n;i++){
		a[i] = 0;
		for(j = 1;j < m;j++){
			a[i] = M[i][a[i]] > M[i][j] ? a[i] : j; 
		}
	}
	for(i = 0;i < m;i++){
		c[i] = 0;
		for(j = 1;j < n;j++){
			c[i] = M[c[i]][i] < M[j][i] ? c[i] : j; 
		}
	}
	for(i = 0;i < n;i++){
		if(i == c[a[i]]){
			printf("Point:a[%d][%d]==%d\n",i,a[i],M[i][a[i]]);
			flag = 0;
		} 
	}
	if(flag)printf("No Point\n");
	return 0;
}

