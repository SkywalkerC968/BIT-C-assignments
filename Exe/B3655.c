#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int read(){
	char ch = getchar();
	int x = 0;
	for(;'0'<=ch&&ch<='9';x = (x<<1)+(x<<3)+(ch^48),ch = getchar());
	return x;
}

int main() {
	int n,i,d,tmp,gain,value[6];
	n = read();
	for(i = 0;i < 6;i++){
		value[i] = read();
	}
	tmp = read();
	for(i = 0,d = 0,gain = 0;i < n;){
		for(;tmp!=0&&i<n-1;tmp = read(),i++){
			d++;
			if(1<=d&&d<3)gain += value[0];
			else if(3<=d&&d<7)gain += value[1];
			else if(7<=d&&d<30)gain += value[2];
			else if(30<=d&&d<120)gain += value[3];
			else if(120<=d&&d<365)gain += value[4];
			else if(365<=d)gain += value[5];
		}
		for(;tmp==0&&i<n-1;tmp = read(),i++){
			d = 0;
		}
		if(i == n-1){//ÂúÊÇ²¹¶¡µÄ´úÂë£¬²ÑÀ¢²ÑÀ¢ 
			if(tmp){
				d++;
				if(1<=d&&d<3)gain += value[0];
				else if(3<=d&&d<7)gain += value[1];
				else if(7<=d&&d<30)gain += value[2];
				else if(30<=d&&d<120)gain += value[3];
				else if(120<=d&&d<365)gain += value[4];
				else if(365<=d)gain += value[5];
			}
			i++;
		}
	}
	printf("%d",gain);
	return 0;
}

