#include <stdio.h>

int main() {
//	printf("%d\n",'+');
//	printf("%d\n",'-');
//	printf("%d\n",'*');
//	printf("%d\n",'/');
//	printf("%d\n",'%');
	int a = 0,c = 0;
	char b;
	scanf("%d %c %d",&a,&b,&c);
	switch(b){
		case 43:
			printf("%d\n",a + c);
			break;
		case 45:
			printf("%d\n",a - c);
			break;
		case 42:
			printf("%d\n",a * c);
			break;
		case 47:
			printf("%d\n",a / c);
			break;
		case 37: 
			printf("%d\n",a % c);
			break;
		 
	}
	return 0;
}

