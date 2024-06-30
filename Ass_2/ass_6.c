#include <stdio.h>

int main() {
	char a;
	scanf("%c",&a);
	if(65<=a && a<=90)printf("%c\n",a + 32);
	else if(97<=a && a<=122)printf("%c\n",a - 32);
	else printf("%c\n",a);
	return 0;
}

