#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


double lnx(int n){
	if(n == 1)return 1;
	return lnx(n-1)+(double)1/n*pow(-1,n-1);
}

int main() {
	int n = 0;
	scanf("%d",&n);
	if(n == 1)printf("1\n");//ÃÔ»óĞÔĞĞÎª
	else printf("%lf\n",2-lnx(n));
	return 0;
}

