#include <stdio.h>
#include <math.h>

int main() {
	int y = 0,d = 0,n = 0,N = 0,F = 0;
	scanf("%d",&y);
	//1901.1.1ÎªÐÇÆÚ¶þ¡£
	N = y-1901;
	n = 25 + (N-100)/4 - (N-100)/100 + (N-100)/400;
	for(d = 1;d <= 31;d++){
		if(y%4 == 0 && y%100 != 0 || y%400 == 0 && y != 2000){
			if((((N-n)*365+n*366+31+29+31+30+d)%7+8)%7 == 0) F++;
			if(F == 2){
				printf("%d\n",d);
				break;
			}
		}
		else if(y == 2000){
			n--;
			if((((N-n)*365+n*366+31+29+31+30+d)%7+8)%7 == 0) F++;
			if(F == 2){
				printf("%d\n",d);
				break;
			}
		}
		else {
			if((((N-n)*365+n*366+31+28+31+30+d)%7+8)%7 == 0) F++;
			if(F == 2){
				printf("%d\n",d);
				break;
			}
		}
	}
	return 0;
}
