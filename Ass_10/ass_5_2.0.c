#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int N = 0,n = 0,i = 0,tmp = 0,lst[50] = {0};//生死簿！！！ 
	scanf("%d%d",&N,&n);
	for(;i < N;i++){
		int j = 0,k = 0;
		while(j < n){//攒满n个则记上生死簿 
			tmp++;
			j++;
			if(tmp > N)tmp %= N;
			for(k = 0;k < N;k++){
				if(tmp == lst[k])j--;
			}
		}
		lst[i] = tmp;
	} 
	printf("The left child is NO %d.\n",lst[N-1]);
	return 0;
}

