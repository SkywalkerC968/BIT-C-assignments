#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int T = 0,i = 0;
	scanf("%d",&T);
	for(;i < T;i++){
		int N = 0,j = 0,si = 0,k = 0;
		long long int pfs[10002] = {0},min = 0,max = 0;
		scanf("%d%d",&N,&si);
		pfs[1] = si;
		for(j = 1,k = 2;j < N;j++,k++){
			scanf("%d",&si);
			pfs[k] = si + pfs[k-1];
		}
		min = pfs[0];
		max = pfs[1] - pfs[0];
		for(j = 1;j < N+1;j++){
			min = min < pfs[j-1] ? min : pfs[j-1];
			max = max > pfs[j] - min ? max : pfs[j] - min; 
		}
		printf("%lld\n",max);
	}
	return 0;
}

