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
	for(m = 1;m <= 12;m++){
		day = concatenate(y,m,13);
		if(day == 5){
			a[k] = m;
			k++;
			continue;
		}
	}
	if(k == 1){
		printf("There is 1 Black Friday in year %d.\n",y);
		printf("It is:\n");
		printf("%d/%d/13\n",y,a[0]);
	}
	else{
		printf("There are %d Black Fridays in year %d.\n",k,y);
		printf("They are:\n");
		for(m = 0;m < k;m++){
			printf("%d/%d/13\n",y,a[m]);
		}
	}
}

