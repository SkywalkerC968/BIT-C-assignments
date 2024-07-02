#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int concatenate(int y,int m,int d) {
	int n = 0,N = 0,day = 0;
//	1901.1.1为星期二。
	N = y-1901;
	n = 25 + floor((double)(N-100)/4) - floor((double)(N-100)/100) + floor((double)(N-100)/400);
//	n = 25 + floor((N-100.0)/4 - (N-100.0)/100 + (N-100.0)/400);少年郎，好好对比吧！闰年之殇？万年之狂！！！ 
	if(y%4 == 0 && y%100 != 0 || y%400 == 0){
		switch(m){
			case 1:
				
				day = (((N-n)*365+n*366+d)%7+8)%7;
				break;
		
			case 2:
				
				day = (((N-n)*365+n*366+31+d)%7+8)%7;
				break;
				
			case 3:
				
				day = (((N-n)*365+n*366+31+29+d)%7+8)%7;
				break;
				
			case 4:
				
				day = (((N-n)*365+n*366+31+29+31+d)%7+8)%7;
				break;
				
			case 5:
				
				day = (((N-n)*365+n*366+31+29+31+30+d)%7+8)%7;
				break;
				
			case 6:
				
				day = (((N-n)*365+n*366+31+29+31+30+31+d)%7+8)%7;
				break;
				
			case 7:
				
				day = (((N-n)*365+n*366+31+29+31+30+31+30+d)%7+8)%7;
				break;
				
			case 8:
				
				day = (((N-n)*365+n*366+31+29+31+30+31+30+31+d)%7+8)%7;
				break;
				
			case 9:
				
				day = (((N-n)*365+n*366+31+29+31+30+31+30+31+31+d)%7+8)%7;
				break;
				
			case 10:
				
				day = (((N-n)*365+n*366+31+29+31+30+31+30+31+31+30+d)%7+8)%7;
				break;
				
			case 11:
				
				day = (((N-n)*365+n*366+31+29+31+30+31+30+31+31+30+31+d)%7+8)%7;
				break;
				
			case 12:
				
				day = (((N-n)*365+n*366+31+29+31+30+31+30+31+31+30+31+30+d)%7+8)%7;
				break;
				
		}
	}
	else {
		switch(m){
			case 1:
				
				day = (((N-n)*365+n*366+d)%7+8)%7;
				break;
			case 2:

				day = (((N-n)*365+n*366+31+d)%7+8)%7;
				break;
			case 3:
				
				day = (((N-n)*365+n*366+31+28+d)%7+8)%7;
				break;
			case 4:
				
				day = (((N-n)*365+n*366+31+28+31+d)%7+8)%7;
				break;
			case 5:
				
				day = (((N-n)*365+n*366+31+28+31+30+d)%7+8)%7;
				break;
			case 6:
				
				day = (((N-n)*365+n*366+31+28+31+30+31+d)%7+8)%7;
				break;
			case 7:
				
				day = (((N-n)*365+n*366+31+28+31+30+31+30+d)%7+8)%7;
				break;
			case 8:
				
				day = (((N-n)*365+n*366+31+28+31+30+31+30+31+d)%7+8)%7;
				break;
			case 9:
				
				day = (((N-n)*365+n*366+31+28+31+30+31+30+31+31+d)%7+8)%7;
				break;
			case 10:
				
				day = (((N-n)*365+n*366+31+28+31+30+31+30+31+31+30+d)%7+8)%7;
				break;
			case 11:
				
				day = (((N-n)*365+n*366+31+28+31+30+31+30+31+31+30+31+d)%7+8)%7;
				break;
			case 12:
				
				day = (((N-n)*365+n*366+31+28+31+30+31+30+31+31+30+31+30+d)%7+8)%7;
				break;
		}
	}
	return day;
}

int main(){
	int y = 0,m = 0,d = 0,day = 0,k = 0,a[12] = {0};
	scanf("%d",&y);
	day = concatenate(y,10,1);
	if(day == 1)printf("10.01-10.07\n");
	else if(1<day && day<=5)printf("09.%d-10.0%d\n",32-day,8-day);
	else if(day == 0)printf("09.30-10.06\n");
	else printf("10.01-10.07\n");

}

