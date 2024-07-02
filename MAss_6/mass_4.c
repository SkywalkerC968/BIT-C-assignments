#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

void sort(int*m){
	int i = 0,j = 0,tmp = 0;
	for(;i < 4;i++){
		for(j = 0;j < 3-i;j++){
			if(m[j] > m[j+1]){
				tmp = m[j];
				m[j] = m[j+1];
				m[j+1] = tmp; 
			}
		}
	}
}

int check(int*r,int n){
	int i = 0;
	for(;i < n;i++){
		
	}	
}

int min(int*n){
	int i = 0,min = n[0];
	for(;i < 1017;i++){
		min = min > n[i] ? min : n[i];
	}
	return min;
}

int main() {
	int a = 0,b = 0,c = 0,d = 0,i = 0,j = 0,k = 0,l = 0,n = 0,flag = 1;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	int m[4] = {a,b,c,d},r[126] = {0};
	sort(m);
	r[0] = 1;
	//由于此时组合和大小并未按照顺序排列，无法中途比较差值从而减少运算 
	for(l = 0;l <= 5;l++){
		for(k = 0;k <= 5-l;k++){
			for(j = 0;j <= 5-l-k;j++){
				for(i = 0;i <= 5-l-k-j;i++){
					r[n] = m[0]*i + m[1]*j + m[2]*k + m[3]*l;
					n++;
				}
			}
		}
	}
	j = 1;
	while(flag){
		for(i = 0;i < 126;i++){
			if(r[i] == j){
				j++;
				break;
			}
		}
		if(i == 126)flag = 0;
	}
	
	
	printf("The max is %d.\n",j-1);
	return 0;
}

