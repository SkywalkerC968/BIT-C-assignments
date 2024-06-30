#include <stdio.h>

int main() {
	int a = 0,c = 0;
	char b;
	scanf("%d%d\n%c",&a,&c,&b);
	if(b == '+') printf("%d\n",a + c);
	if(b == '-') printf("%d\n",a - c);
	if(b == '*') printf("%d\n",a * c);
	if(b == '/'&&c != 0) printf("%d\n",a / c);
	if(b == '/'&&c == 0) printf("Go to hell!\n");
	if(b == '%'&&c != 0) printf("%d\n",a % c);
	if(b == '/'&&c == 0) printf("Go to hell!\n");	
	return 0;
}

