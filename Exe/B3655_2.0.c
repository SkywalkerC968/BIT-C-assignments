#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int read(){
	char ch = getchar();
	int x = 0;
	for(;'0'<=ch&&ch<='9';x = (x<<1)+(x<<3)+(ch^48),ch = getchar());//或许她的格式确实有所独特之处。 
	return x;
}

int main() {
	int n,i,d,tmp,gain,value[6];
	n = read();
	for(i = 0;i < 6;i++){
		value[i] = read();
	}
	for(i = 0,d = 0;i < n;i++){
		tmp = read();
		if(tmp){
			d++;
			if(1<=d&&d<3)gain += value[0];
			else if(3<=d&&d<7)gain += value[1];
			else if(7<=d&&d<30)gain += value[2];
			else if(30<=d&&d<120)gain += value[3];
			else if(120<=d&&d<365)gain += value[4];
			else if(365<=d)gain += value[5];
		}
		else{
			d = 0;
		}
	}
	printf("%d",gain);
	return 0;
}

