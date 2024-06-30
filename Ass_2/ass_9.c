#include <stdio.h>
#include <math.h>

int main() {
	int a = 0,b = 0,c = 0,del = 0; 
	double x1 = 0,x2 = 0,s = 0;
	scanf("%d%d%d",&a,&b,&c);
	del = b*b-4*a*c;
	if(a == 0 && b !=0){
		if(c == 0)printf("x=%.6lf\n",0);
		else printf("x=%.6lf\n",-(double)c/b);
	}
	else if(a !=0 && del >= 0){
		x1 = (-(double)b + sqrt(del))/2/a;
		x2 = (-(double)b - sqrt(del))/2/a;
		if(x1 == x2)printf("x1=x2=%.6lf\n",x1);
		else printf("x1=%.6lf\nx2=%.6lf\n",x1,x2);
	}
	else if(a !=0 && del < 0){
		s = -(double)b/2/a;
		x1 = sqrt(-del)/2/a;
		x2 = sqrt(-del)/2/a;
		if(b == 0)printf("x1=%.6lfi\nx2=-%.6lfi\n",x1,x2);
		else printf("x1=%.6lf+%.6lfi\nx2=%.6lf-%.6lfi\n",s,x1,s,x2);
	}
	else printf("%s\n","Input error!"); 
	return 0;
}

