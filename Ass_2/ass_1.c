#include <stdio.h>

int main() {
	int a = 0,c = 0;
	char b;
	scanf("%d %c %d",&a,&b,&c);
	//printf("%d,%c,%d\n",a,b,c);
	if(b == '+') printf("%d\n",a + c);
	if(b == '-') printf("%d\n",a - c);
	if(b == '*') printf("%d\n",a * c);
	if(b == '/') printf("%d\n",a / c);
	if(b == '%') printf("%d\n",a % c);
	return 0;
}

