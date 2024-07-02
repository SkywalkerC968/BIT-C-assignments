#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int h = 0,i = 0,j = 0;
	char x;
	scanf("%c%d",&x,&h);
	for(i = h-1;i >= -h+1;i--){
		for(j = 0;j < abs(i);j++){
			printf(" ");
		}
		if(abs(i) == h-1){
			printf("%c\n",x);
		}
		else{
			printf("%c",x + h - abs(i) - 1);
			for(j = 0;j < 2*h-3-2*abs(i);j++){
				printf(" ");
			}
			printf("%c\n",x + h - abs(i) - 1);
		}
	}
	return 0;
}

