#include <stdio.h>
#include <math.h>

int main() {
	int y = 0,m = 0,d = 0,n = 0,N = 0;
	scanf("%d%d%d",&y,&m,&d);
	//1601.1.1Ϊ����һ��//1901.1.1Ϊ���ڶ���
	 
	N = y-1601;//N = y-1901;
	n = N/4 - N/100 + N/400; //n = 24 + (N-96)/4 -(N-96)/100 + (N-96)/400;//n = 25 + (N-100)/4 - (N-100)/100 + (N-100)/400;
	
	/*�վ�����������ֵת��ʱ��˫������Ӱ�죬��1996�����2000��ʱ�����ǻ������Լ����ꡣ
	���ǵ���ȡ��1600���ɣ�*/  
	
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
//ϧ�գ�1600��������Ȼ�����⡣��Ȼ�ж����˵����⡣��ô�ƺ���������ת�����ǲ��ɱ���ġ� 
