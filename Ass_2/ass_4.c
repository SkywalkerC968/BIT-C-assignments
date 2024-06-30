#include <stdio.h>
#define PI 3.1415926

int main() {
	double r = 0,h = 0,s = 0,v = 0;
	scanf("%lf%lf",&r,&h);
	printf("s=%.2lf,v=%.2lf\n",2*PI*r*h,PI*r*r*h);
	return 0;
}

