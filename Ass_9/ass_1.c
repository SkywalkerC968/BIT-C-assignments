#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

double sqroot(double x,double p,double e){
	if(fabs(p*p-x) < e)return p;
	else sqroot(x,(p+x/p)/2,e);
}

int main() {
	double x = 0,e = 0;
	scanf("%lf%lf",&x,&e);
	printf("%.8lf\n",sqroot(x,1.0,e));
	return 0;
}

