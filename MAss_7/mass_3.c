#include <stdio.h>
#include <string.h>
#include <math.h>

//int mod(int i,int n){
//	if(i < 0)return i%n + n;
//	else return i%n;
//}

int main(){
	int n = 0,i = 1,j = i,k = 0;
	scanf("%d",&n);
	do{
		k++;
		if(j <= n){
			j = 2*j;
//			j %= 2*n;
		}
		else{
			j = 2*(j-n)-1;
//			j %= 2*n;
		}
	}while(j != i);
	printf("%d\n",k);
	return 0;
}

