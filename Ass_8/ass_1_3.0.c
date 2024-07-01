#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int a = 0,b = 0,i = 0;
	long long int x = 1,y = 1; 
	scanf("%d%d",&a,&b);
	
	if((b-a)%2){
		for(i = 1;i <= (b-a)/2+1;i++){
			x = x + y;
			y = x + y;
		}
		printf("%lld\n",y-x);
	}
	else{
		for(i = 1;i <= (b-a)/2;i++){
			x = x + y;
			y = x + y;
		}
		printf("%lld\n",y);
	} 
	return 0;
}

