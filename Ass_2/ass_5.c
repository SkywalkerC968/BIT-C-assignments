#include <stdio.h>

int main() {
	int a = 0,b = 0;
	scanf("%d%d",&a,&b);
	if(a<=b)printf("min=%d\n",a);
	if(a>b)printf("min=%d\n",b);
	return 0;
}

