#include <stdio.h>

int main() {
	int a = 0;
	float b = 0.00;
	scanf("%d%f",&a,&b);
	if(a == 1)printf("The Centigrade is %.2f\n",5.00/9*(b-32));
	if(a == 2)printf("The Fahrenheit is %.2f\n",(9.00/5*b)+32) ;
	return 0;
}

