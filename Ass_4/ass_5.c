#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int n = 0,a = 0,b = 0,c = 0,flag = 0;
	scanf("%d",&n);
	for(c = 1;c <= 10*n/45;c++){
		if(45*c + 12*5*c*0.5 + 10*5*c*0.1 == 10*n){
			flag = 1;
			break;
		}  
	} 
	if(flag == 1)printf("%d,%d,%d\n",10*5*c,12*5*c,45*c);
	else printf("No change.\n");
	return 0;
}

