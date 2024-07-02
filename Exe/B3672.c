#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int power(int x,int y){
	int p = 1;
	while(y--){
		p *= x;
	}
	return p;
}

int main() {
	int n,q,i,j,blst[1000],rlst[1000][3];
	scanf("%d%d",&n,&q);
	for(i = 0;i < n;i++){
		scanf("%d",&blst[i]);
	}
	for(i = 0;i < q;i++){
		scanf("%d%d",&rlst[i][0],&rlst[i][1]);
		rlst[i][2] = 0;
	}
	for(i = 0;i < q;i++){
		for(j = 0;j < n;j++){
			if(blst[j]%power(10,rlst[i][0]) == rlst[i][1])rlst[i][2]++;
		}
	}
	for(i = 0;i < q;i++){
		printf("%d\n",rlst[i][2]);
	}
	return 0;
}

