#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

long long int i = 0;

void dfs(int n,int N){//递归是将大的情况化为小的情况解决，而不是从小往大遍历 
	if(n == N){
		i++;//你需要记忆之前的数值，而非每次向前计数 
	}
	else if(n > N);
	else{
		dfs(n + 1,N);
		dfs(n + 2,N);
	}
} 

int main() {
	int a = 0,b = 0;
	scanf("%d%d",&a,&b);
	dfs(a,b);
	printf("%lld\n",i);
	return 0;
}

