#include <stdio.h>
#include <math.h>
#include <algorithm> // C语言中，没有此库！！！ 

int main() {
	int h = 0,m = 0;
	float x = 0;
	scanf("%d%d",&h,&m);
	x = fabs(6*m-30*(h+(float)m/60));
	printf("At %d:%02d the angle is %.1lf degrees.\n",h,m,std::min(x,(float)360-x));
	return 0;
}


