#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int power(int i,int j){
	int k = 0,p = 1;
	for(k = 1;k <= j;k++){
		p *= i;
	}
	return p;
}

void split(int* a,int i){
	int j = 0,k = 0,tmp = i,b[5] = {0};
	while(tmp){
		b[j] = tmp%10;
		tmp /= 10;
		j++;
	}
	for(j = 0;j < 3;j++){
		for(k = 0;k < 3;k++){
			a[j] += b[j+k]*power(10,k);
		}
	}
}

int main() {
	int i = 0,n = 0;
	scanf("%d",&n);
	for(i = 10000;i <= 30000;i++){
		int a[3] = {0,0,0};
		
		split(a,i);
		
		if((a[0]%n | a[1]%n | a[2]%n) == 0)printf("%d\n",i);
	}
	return 0;
}

