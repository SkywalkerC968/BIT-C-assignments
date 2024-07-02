#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

long long int power(int i,int j){
	int k = 0,p = 1;
	for(k = 1;k <= j;k++){
		p *= i;
	}
	return p;
}

int main() {
	int n = 0,i = 0,j = 0;
	scanf("%d\n",&n);
	for(;i < n;i++){
		int k = 0,l = 0;
		long long int flag = 0;
		char bit = getchar();//将flag分为五位一节，每节存储一类数据
		for(;bit != '\n' && bit != EOF;bit = getchar()){
			l++;
			if('A' <= bit && bit <= 'Z')flag++; 
			else if('a' <= bit && bit <= 'z')flag += power(2,5);
			else if('0' <= bit && bit <= '9')flag += power(2,10);
			else flag += power(2,15);
		}
		if(l < 6){
			printf("Not Safe\n");
			continue;
		}
		for(j = 15;j >= 0;j -= 5){
			if((flag>>j) > 0)k++;
			flag -= (flag>>j)*power(2,j);
		}
		if(k == 1)printf("Not Safe\n");
		else if(k == 2)printf("Medium Safe\n");
		else printf("Safe\n");
	}
	
	return 0;
}

