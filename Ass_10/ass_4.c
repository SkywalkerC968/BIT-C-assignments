#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int i = 0,max = 0,day = 0,M[7][2] = {0};
	for(;i < 7;i++){
		scanf("%d%d",M[i],M[i]+1);
	}
	max = M[0][0] + M[0][1];
	for(i = 0;i < 7;i++){
		day = max >= M[i][0] + M[i][1] ? day : i;
		max = max >= M[i][0] + M[i][1] ? max : M[i][0] + M[i][1];
	}
	if(max < 10)printf("0\n");
	else printf("%d\n",day+1);
	return 0;
}

