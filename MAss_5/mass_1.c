#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int a,b,c,N,k = 0;
	scanf("%d",&N);
	for(c = 1;c <= N;c++){
		for(b = 1;b <= c;b++){
			for(a = 1;a <= b;a++){
				if(a*a + b*b == c*c)k++;
			}
		}
	}
	
	printf("%d",k);
	return 0;
}

