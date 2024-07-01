#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	long long int y = 0,m = 0,d = 0,del = 0,res = 0,flag = 0;
	scanf("%lld%lld%lld%lld",&y,&m,&d,&del);
	res = del + d;
	while(flag == 0){
		if(y%4 == 0 && y%100 != 0 || y%400 == 0){
			switch(m){
				case 1:
					if(res-31 <= 0) {
						flag = 1;
						m = 1;
						break;
					}
					else res -= 31;
				case 2:
					if(res-29 <= 0) {
						flag = 1;
						m = 2;
						break;
					}
					else res -= 29;
				case 3:
					if(res-31 <= 0) {
						flag = 1;
						m = 3;
						break;
					}
					else res -= 31;
				case 4:
					if(res-30 <= 0) {
						flag = 1;
						m = 4;
						break;
					}
					else res -= 30;
				case 5:
					if(res-31 <= 0) {
						flag = 1;
						m = 5;
						break;
					}
					else res -= 31;
				case 6:
					if(res-30 <= 0) {
						flag = 1;
						m = 6;
						break;
					}
					else res -= 30;
				case 7:
					if(res-31 <= 0) {
						flag = 1;
						m = 7;
						break;
					}
					else res -= 31;
				case 8:
					if(res-31 <= 0) {
						flag = 1;
						m = 8;
						break;
					}
					else res -= 31;
				case 9:
					if(res-30 <= 0) {
						flag = 1;
						m = 9;
						break;
					}
					else res -= 30;
				case 10:
					if(res-31 <= 0) {
						flag = 1;
						m = 10;
						break;
					}
					else res -= 31;
				case 11:
					if(res-30 <= 0) {
						flag = 1;
						m = 11;
						break;
					}
					else res -= 30;
				case 12:
					if(res-31 <= 0) {
						flag = 1;
						m = 12;
						break;
					}
					else res -= 31;
			}
			y++;
		}
		else{
			switch(m){
				case 1:
					if(res-31 <= 0) {
						flag = 1;
						m = 1;
						break;
					}
					else res -= 31;
				case 2:
					if(res-28 <= 0) {
						flag = 1;
						m = 2;
						break;
					}
					else res -= 28;
				case 3:
					if(res-31 <= 0) {
						flag = 1;
						m = 3;
						break;
					}
					else res -= 31;
				case 4:
					if(res-30 <= 0) {
						flag = 1;
						m = 4;
						break;
					}
					else res -= 30;
				case 5:
					if(res-31 <= 0) {
						flag = 1;
						m = 5;
						break;
					}
					else res -= 31;
				case 6:
					if(res-30 <= 0) {
						flag = 1;
						m = 6;
						break;
					}
					else res -= 30;
				case 7:
					if(res-31 <= 0) {
						flag = 1;
						m = 7;
						break;
					}
					else res -= 31;
				case 8:
					if(res-31 <= 0) {
						flag = 1;
						m = 8;
						break;
					}
					else res -= 31;
				case 9:
					if(res-30 <= 0) {
						flag = 1;
						m = 9;
						break;
					}
					else res -= 30;
				case 10:
					if(res-31 <= 0) {
						flag = 1;
						m = 10;
						break;
					}
					else res -= 31;
				case 11:
					if(res-30 <= 0) {
						flag = 1;
						m = 11;
						break;
					}
					else res -= 30;
				case 12:
					if(res-31 <= 0) {
						flag = 1;
						m = 12;
						break;
					}
					else res -= 31;
			}
			y++;	
		}
	}
	printf("%lld.%lld.%lld\n",y-1,m,res);
	return 0;
}

