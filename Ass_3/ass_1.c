#include <stdio.h>
#include <math.h>

int main() {
	int y = 0,m = 0,d = 0,n = 0,N = 0;
	scanf("%d%d%d",&y,&m,&d);
	//1601.1.1为星期一。//1901.1.1为星期二。
	 
	N = y-1601;//N = y-1901;
	n = N/4 - N/100 + N/400; //n = 24 + (N-96)/4 -(N-96)/100 + (N-96)/400;//n = 25 + (N-100)/4 - (N-100)/100 + (N-100)/400;
	
	/*终究会遇到绝对值转折时的双倍邻域影响，即1996年或者2000年时，总是会算上自己闰年。
	我们单向取！1600开干！*/  
	
	//printf("%d\n",n);
	
	if(y%4 == 0 && y%100 != 0 || y%400 == 0){
		switch(m){
			case 1:
				printf("%d\n",(((N-n)*365+n*366+d)%7+7)%7);
				break;
			case 2:
				printf("%d\n",(((N-n)*365+n*366+31+d)%7+7)%7);
				break;
			case 3:
				printf("%d\n",(((N-n)*365+n*366+31+29+d)%7+7)%7);
				break;
			case 4:
				printf("%d\n",(((N-n)*365+n*366+31+29+31+d)%7+7)%7);
				break;
			case 5:
				printf("%d\n",(((N-n)*365+n*366+31+29+31+30+d)%7+7)%7);
				break;
			case 6:
				printf("%d\n",(((N-n)*365+n*366+31+29+31+30+31+d)%7+7)%7);
				break;
			case 7:
				printf("%d\n",(((N-n)*365+n*366+31+29+31+30+31+30+d)%7+7)%7);
				break;
			case 8:
				printf("%d\n",(((N-n)*365+n*366+31+29+31+30+31+30+31+d)%7+7)%7);
				break;
			case 9:
				printf("%d\n",(((N-n)*365+n*366+31+29+31+30+31+30+31+31+d)%7+7)%7);
				break;
			case 10:
				printf("%d\n",(((N-n)*365+n*366+31+29+31+30+31+30+31+31+30+d)%7+7)%7);
				break;
			case 11:
				printf("%d\n",(((N-n)*365+n*366+31+29+31+30+31+30+31+31+30+31+d)%7+7)%7);
				break;
			case 12:
				printf("%d\n",(((N-n)*365+n*366+31+29+31+30+31+30+31+31+30+31+30+d)%7+7)%7);
				break;
		}
	}
	else {
		switch(m){
			case 1:
				printf("%d\n",(((N-n)*365+n*366+d)%7+7)%7);
				break;
			case 2:
				printf("%d\n",(((N-n)*365+n*366+31+d)%7+7)%7);
				break;
			case 3:
				printf("%d\n",(((N-n)*365+n*366+31+28+d)%7+7)%7);
				break;
			case 4:
				printf("%d\n",(((N-n)*365+n*366+31+28+31+d)%7+7)%7);
				break;
			case 5:
				printf("%d\n",(((N-n)*365+n*366+31+28+31+30+d)%7+7)%7);
				break;
			case 6:
				printf("%d\n",(((N-n)*365+n*366+31+28+31+30+31+d)%7+7)%7);
				break;
			case 7:
				printf("%d\n",(((N-n)*365+n*366+31+28+31+30+31+30+d)%7+7)%7);
				break;
			case 8:
				printf("%d\n",(((N-n)*365+n*366+31+28+31+30+31+30+31+d)%7+7)%7);
				break;
			case 9:
				printf("%d\n",(((N-n)*365+n*366+31+28+31+30+31+30+31+31+d)%7+7)%7);
				break;
			case 10:
				printf("%d\n",(((N-n)*365+n*366+31+28+31+30+31+30+31+31+30+d)%7+7)%7);
				break;
			case 11:
				printf("%d\n",(((N-n)*365+n*366+31+28+31+30+31+30+31+31+30+31+d)%7+7)%7);
				break;
			case 12:
				printf("%d\n",(((N-n)*365+n*366+31+28+31+30+31+30+31+31+30+31+30+d)%7+7)%7);
				break;
		}
	}
	return 0;
}
//惜哉，1600年自身仍然有问题。仍然有多算了的问题。那么似乎单独考虑转折年是不可避免的。 

