#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define PI 3.1415926

int main() {
	int r,h;
	double s,v;
	scanf("%d%d",&r,&h);
	printf("s=%.2f,v=%.2f\n",2*PI*r*h,r*r*h*PI);
	return 0;
}

