#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	char a,b[5],c[5];
	int n[11] = {0},i = 0,sum1 = 0,sum0 = 0,UPC = 0;
	scanf("%c%s%s",&a,b,c);
	n[0] = (int)a-'0';
	for(i = 1;i <= 5;i++){
		n[i] = (int)b[i-1]-'0';
	}
	for(i = 6;i <= 10;i++){
		n[i] = (int)c[i-6]-'0';
	}
	for(i = 0;i <= 10;i += 2){
		sum1 += n[i];
	}
	for(i = 1;i <= 10;i += 2){
		sum0 += n[i];
	}
	UPC = 9 - (3*sum1 + sum0 - 1)%10;
	printf("%d\n",UPC);
	return 0;
}

