#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

__int128 f[520];

__int128 Feb(int n){
	if(f[n])return f[n];
	if(n <= 1)return 1;
	else return f[n] = Feb(n-1) + Feb(n-2);
} 

int main() {
	int a = 0,b = 0,j = 0,res[41] = {0};
	__int128 i = 0;
	scanf("%d%d",&a,&b);
	i = Feb(b-a);
	
	for(;j < 41;j++){
		res[j] = i%10;
		i /= 10;
	}
	while(res[j-1] == 0)j--;
	for(j--;j >= 0;j--){
		putchar(res[j]+'0');
	}
	putchar('\n');
	return 0;
}

