#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

double max(double*n){
	long long int i = 0;
	double max = n[0];
	for(;i < 161700;i++){
		max = max > n[i] ? max : n[i];
	}
	return max;
}

int main() {
	int T = 0,i = 0;
	scanf("%d",&T);
	for(;i < T;i++){
		int N = 0,j = 0,k = 0,p = 0,q = 0,r = 0,M[100][2] = {0};
		double R[161700] = {0};
		scanf("%d",&N);
		for(;j < N;j++){
			scanf("%d%d",&M[j][0],&M[j][1]);
		}
		for(;k < j;k++){
			for(p = k+1;p < j;p++){
				for(q = p+1;q < j;q++){
					R[r++] = fabs((M[q][1]-M[k][1])*(M[p][0]-M[k][0])-(M[p][1]-M[k][1])*(M[q][0]-M[k][0]))/2;
				}
			}
		}
		printf("%.1f\n",max(R));
	}
	return 0;
}

