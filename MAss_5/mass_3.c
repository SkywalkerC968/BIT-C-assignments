#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int m = 1,n,s = 0;
	scanf("%d",&n);
	while(s < n){
		s += m;
		m++;
	}
	printf("%d",m-1);
	return 0;
}

