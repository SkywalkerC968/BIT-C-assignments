#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	long long int i = 0,p = 1,x = 0,y = 0,F = 0;
	scanf("%d%d",&x,&y);
	x = x%1000;
	y = y%1000;
//	printf("%d,%d\n",x,y);
	for(i = 1;i <= y;i++){
		p *= x;
		if(p/1000 != 0)F = 1;
		p %= 1000;
		
	}
	if(!F)printf("The last 3 numbers is %d.\n",p);
	else printf("The last 3 numbers is %03d.\n",p);
	return 0;
}

