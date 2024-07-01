#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define lim 41

void add(int* a,int* b){
	int bi = 0,i = 0;
	for(;i < lim;i++){
		bi = a[i] + b[i] + bi/10;
		b[i] = bi%10;
	}
}

int main() {
	int a = 0,b = 0,i = 0;
	int x[lim] = {0},y[lim] = {0}; 
	scanf("%d%d",&a,&b);
	x[0] = 1;
	y[0] = 1;
	if((b-a)%2){
		add(x,y);
		for(i = 1;i <= (b-a)/2;i++){
			add(y,x);
			add(x,y);
		}
		i = lim-1;  
		while(x[i] == 0)i--;
		for(;i >= 0;i--){
			printf("%d",x[i]);
		}
		printf("\n");
	}
	else{
		for(i = 1;i <= (b-a)/2;i++){
			add(x,y);
			add(y,x);
		}
		i = lim-1;  
		while(y[i] == 0)i--;
		for(;i >= 0;i--){
			printf("%d",y[i]);
		}
		printf("\n");
	} 
	return 0;
}

