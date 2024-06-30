#include <stdio.h>
#include <math.h>

int main() {
	int y = 0,m = 0,d = 0,n = 0,N = 0;
	scanf("%d%d%d",&y,&m,&d);
//	1901.1.1ÎªÐÇÆÚ¶þ¡£
	N = y-1901;
	n = 25 + floor((double)(N-100)/4) - floor((double)(N-100)/100) + floor((double)(N-100)/400);
	if(y%4 == 0 && y%100 != 0 || y%400 == 0){
		switch(m){
			case 1:
				printf("%d\n",(((N-n)*365+n*366+d)%7+8)%7);
				break;
			case 2:
				printf("%d\n",(((N-n)*365+n*366+31+d)%7+8)%7);
				break;
			case 3:
				printf("%d\n",(((N-n)*365+n*366+31+29+d)%7+8)%7);
				break;
			case 4:
				printf("%d\n",(((N-n)*365+n*366+31+29+31+d)%7+8)%7);
				break;
			case 5:
				printf("%d\n",(((N-n)*365+n*366+31+29+31+30+d)%7+8)%7);
				break;
			case 6:
				printf("%d\n",(((N-n)*365+n*366+31+29+31+30+31+d)%7+8)%7);
				break;
			case 7:
				printf("%d\n",(((N-n)*365+n*366+31+29+31+30+31+30+d)%7+8)%7);
				break;
			case 8:
				printf("%d\n",(((N-n)*365+n*366+31+29+31+30+31+30+31+d)%7+8)%7);
				break;
			case 9:
				printf("%d\n",(((N-n)*365+n*366+31+29+31+30+31+30+31+31+d)%7+8)%7);
				break;
			case 10:
				printf("%d\n",(((N-n)*365+n*366+31+29+31+30+31+30+31+31+30+d)%7+8)%7);
				break;
			case 11:
				printf("%d\n",(((N-n)*365+n*366+31+29+31+30+31+30+31+31+30+31+d)%7+8)%7);
				break;
			case 12:
				printf("%d\n",(((N-n)*365+n*366+31+29+31+30+31+30+31+31+30+31+30+d)%7+8)%7);
				break;
		}
	}
	else {
		switch(m){
			case 1:
				printf("%d\n",(((N-n)*365+n*366+d)%7+8)%7);
				break;
			case 2:
				printf("%d\n",(((N-n)*365+n*366+31+d)%7+8)%7);
				break;
			case 3:
				printf("%d\n",(((N-n)*365+n*366+31+28+d)%7+8)%7);
				break;
			case 4:
				printf("%d\n",(((N-n)*365+n*366+31+28+31+d)%7+8)%7);
				break;
			case 5:
				printf("%d\n",(((N-n)*365+n*366+31+28+31+30+d)%7+8)%7);
				break;
			case 6:
				printf("%d\n",(((N-n)*365+n*366+31+28+31+30+31+d)%7+8)%7);
				break;
			case 7:
				printf("%d\n",(((N-n)*365+n*366+31+28+31+30+31+30+d)%7+8)%7);
				break;
			case 8:
				printf("%d\n",(((N-n)*365+n*366+31+28+31+30+31+30+31+d)%7+8)%7);
				break;
			case 9:
				printf("%d\n",(((N-n)*365+n*366+31+28+31+30+31+30+31+31+d)%7+8)%7);
				break;
			case 10:
				printf("%d\n",(((N-n)*365+n*366+31+28+31+30+31+30+31+31+30+d)%7+8)%7);
				break;
			case 11:
				printf("%d\n",(((N-n)*365+n*366+31+28+31+30+31+30+31+31+30+31+d)%7+8)%7);
				break;
			case 12:
				printf("%d\n",(((N-n)*365+n*366+31+28+31+30+31+30+31+31+30+31+30+d)%7+8)%7);
				break;
		}
	}
	return 0;
}
