#include <stdio.h>   
#include <math.h>   
   
int main() {   
	int h = 0,m = 0;   
	float x = 0;   
	scanf("%d%d",&h,&m);   
	x = fabs(6*m-30*(h+(float)m/60));   
	if(x>=180)printf("At %d:%02d the angle is %.1lf degrees.\n",h,m,360.0-x);   
	else printf("At %d:%02d the angle is %.1lf degrees.\n",h,m,x);   
	return 0;   
} 
