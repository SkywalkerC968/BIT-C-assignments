#include <stdio.h>
#include <math.h>

int main() {
	int y = 0,m = 0,d = 0,n = 0,N = 0;
	scanf("%d%d%d",&y,&m,&d);
//	1901.1.1为星期二。
	N = y-1901;
	n = 25 + (N-100)/4 - (N-100)/100 + (N-100)/400;
//	笑话！笑话！负数君欲何为？？？单独提出2000更是无稽！！！ 
	if(m<=0 || m>=12)printf("month is error.\n");
	else if(y%4 == 0 && y%100 != 0 || y%400 == 0 && y != 2000){
		switch(m){
			case 1:
				if(d<=0 || d>=32)printf("day is error.\n");
				else printf("%d\n",(((N-n)*365+n*366+d)%7+8)%7);
				break;
		
			case 2:
				if(d<=0 || d>=30)printf("day is error.\n");
				else printf("%d\n",(((N-n)*365+n*366+31+d)%7+8)%7);
				break;
				
			case 3:
				if(d<=0 || d>=32)printf("day is error.\n");
				else printf("%d\n",(((N-n)*365+n*366+31+29+d)%7+8)%7);
				break;
				
			case 4:
				if(d<=0 || d>=31)printf("day is error.\n");
				else printf("%d\n",(((N-n)*365+n*366+31+29+31+d)%7+8)%7);
				break;
				
			case 5:
				if(d<=0 || d>=32)printf("day is error.\n");
				else printf("%d\n",(((N-n)*365+n*366+31+29+31+30+d)%7+8)%7);
				break;
				
			case 6:
				if(d<=0 || d>=31)printf("day is error.\n");
				else printf("%d\n",(((N-n)*365+n*366+31+29+31+30+31+d)%7+8)%7);
				break;
				
			case 7:
				if(d<=0 || d>=32)printf("day is error.\n");
				else printf("%d\n",(((N-n)*365+n*366+31+29+31+30+31+30+d)%7+8)%7);
				break;
				
			case 8:
				if(d<=0 || d>=32)printf("day is error.\n");
				else printf("%d\n",(((N-n)*365+n*366+31+29+31+30+31+30+31+d)%7+8)%7);
				break;
				
			case 9:
				if(d<=0 || d>=31)printf("day is error.\n");
				else printf("%d\n",(((N-n)*365+n*366+31+29+31+30+31+30+31+31+d)%7+8)%7);
				break;
				
			case 10:
				if(d<=0 || d>=32)printf("day is error.\n");
				else printf("%d\n",(((N-n)*365+n*366+31+29+31+30+31+30+31+31+30+d)%7+8)%7);
				break;
				
			case 11:
				if(d<=0 || d>=31)printf("day is error.\n");
				else printf("%d\n",(((N-n)*365+n*366+31+29+31+30+31+30+31+31+30+31+d)%7+8)%7);
				
				break;
				
			case 12:
				if(d<=0 || d>=32)printf("day is error.\n");
				else printf("%d\n",(((N-n)*365+n*366+31+29+31+30+31+30+31+31+30+31+30+d)%7+8)%7);
				break;
				
		}
	}
	else if(y == 2000){
		n--;
		switch(m){
			case 1:
				if(d<=0 || d>=32)printf("day is error.\n");
				else printf("%d\n",(((N-n)*365+n*366+d)%7+8)%7);
				break;
		
			case 2:
				if(d<=0 || d>=30)printf("day is error.\n");
				else printf("%d\n",(((N-n)*365+n*366+31+d)%7+8)%7);
				break;
				
			case 3:
				if(d<=0 || d>=32)printf("day is error.\n");
				else printf("%d\n",(((N-n)*365+n*366+31+29+d)%7+8)%7);
				break;
				
			case 4:
				if(d<=0 || d>=31)printf("day is error.\n");
				else printf("%d\n",(((N-n)*365+n*366+31+29+31+d)%7+8)%7);
				break;
				
			case 5:
				if(d<=0 || d>=32)printf("day is error.\n");
				else printf("%d\n",(((N-n)*365+n*366+31+29+31+30+d)%7+8)%7);
				break;
				
			case 6:
				if(d<=0 || d>=31)printf("day is error.\n");
				else printf("%d\n",(((N-n)*365+n*366+31+29+31+30+31+d)%7+8)%7);
				break;
				
			case 7:
				if(d<=0 || d>=32)printf("day is error.\n");
				else printf("%d\n",(((N-n)*365+n*366+31+29+31+30+31+30+d)%7+8)%7);
				break;
				
			case 8:
				if(d<=0 || d>=32)printf("day is error.\n");
				else printf("%d\n",(((N-n)*365+n*366+31+29+31+30+31+30+31+d)%7+8)%7);
				break;
				
			case 9:
				if(d<=0 || d>=31)printf("day is error.\n");
				else printf("%d\n",(((N-n)*365+n*366+31+29+31+30+31+30+31+31+d)%7+8)%7);
				break;
				
			case 10:
				if(d<=0 || d>=32)printf("day is error.\n");
				else printf("%d\n",(((N-n)*365+n*366+31+29+31+30+31+30+31+31+30+d)%7+8)%7);
				break;
				
			case 11:
				if(d<=0 || d>=31)printf("day is error.\n");
				else printf("%d\n",(((N-n)*365+n*366+31+29+31+30+31+30+31+31+30+31+d)%7+8)%7);
				
				break;
				
			case 12:
				if(d<=0 || d>=32)printf("day is error.\n");
				else printf("%d\n",(((N-n)*365+n*366+31+29+31+30+31+30+31+31+30+31+30+d)%7+8)%7);
				break;
				
		}
	}
	else {
		switch(m){
			case 1:
				if(d<=0 || d>=32)printf("day is error.\n");
				else printf("%d\n",(((N-n)*365+n*366+d)%7+8)%7);
				break;
			case 2:
				if(d<=0 || d>=29)printf("day is error.\n");
				else printf("%d\n",(((N-n)*365+n*366+31+d)%7+8)%7);
				break;
			case 3:
				if(d<=0 || d>=32)printf("day is error.\n");
				else printf("%d\n",(((N-n)*365+n*366+31+28+d)%7+8)%7);
				break;
			case 4:
				if(d<=0 || d>=31)printf("day is error.\n");
				else printf("%d\n",(((N-n)*365+n*366+31+28+31+d)%7+8)%7);
				break;
			case 5:
				if(d<=0 || d>=32)printf("day is error.\n");
				else printf("%d\n",(((N-n)*365+n*366+31+28+31+30+d)%7+8)%7);
				break;
			case 6:
				if(d<=0 || d>=31)printf("day is error.\n");
				else printf("%d\n",(((N-n)*365+n*366+31+28+31+30+31+d)%7+8)%7);
				break;
			case 7:
				if(d<=0 || d>=32)printf("day is error.\n");
				else printf("%d\n",(((N-n)*365+n*366+31+28+31+30+31+30+d)%7+8)%7);
				break;
			case 8:
				if(d<=0 || d>=32)printf("day is error.\n");
				else printf("%d\n",(((N-n)*365+n*366+31+28+31+30+31+30+31+d)%7+8)%7);
				break;
			case 9:
				if(d<=0 || d>=31)printf("day is error.\n");
				else printf("%d\n",(((N-n)*365+n*366+31+28+31+30+31+30+31+31+d)%7+8)%7);
				break;
			case 10:
				if(d<=0 || d>=32)printf("day is error.\n");
				else printf("%d\n",(((N-n)*365+n*366+31+28+31+30+31+30+31+31+30+d)%7+8)%7);
				break;
			case 11:
				if(d<=0 || d>=31)printf("day is error.\n");
				else printf("%d\n",(((N-n)*365+n*366+31+28+31+30+31+30+31+31+30+31+d)%7+8)%7);
				break;
			case 12:
				if(d<=0 || d>=32)printf("day is error.\n");
				else printf("%d\n",(((N-n)*365+n*366+31+28+31+30+31+30+31+31+30+31+30+d)%7+8)%7);
				break;
		}
	}
	return 0;
}
