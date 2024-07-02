#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

struct Code{
	int input;
	int show[8];
};

struct Code lst[10] = {
	0,{1,0,1,1,1,1,1,0},
	1,{0,0,0,0,1,0,1,0},
	2,{1,1,1,0,1,1,0,0},
	3,{1,1,1,0,1,0,1,0},
	4,{0,1,0,1,1,0,1,0},
	5,{1,1,1,1,0,0,1,0},
	6,{1,1,1,1,0,1,1,0},
	7,{0,0,1,0,1,0,1,0},
	8,{1,1,1,1,1,1,1,0},
	9,{1,1,1,1,1,0,1,0}
};

int power(int x,int y){
	int i,p = 1;
	for(i = 0;i < y;i++){
		p *= x;
	}
	return p;
}

int read(char ch){
	int n = 0;
	for(;'0' <= ch && ch <= '9';n = (n<<1)+(n<<3)+(ch^48),ch = getchar());
	return n;
}

int main() {
	int i,j,n,pos[10],res[41];
	char ch = getchar();
	for(i = 0;i < 10;i++){
		pos[i] = 0;
		for(j = 0;j < 8;j++){
			pos[i] += (lst[i].show)[j]*power(2,j);
		} 
	}
	while(n = read(ch)){
		i = 0;
		while(n){
			res[i++] = n%10;
			n /= 10;
		}
		for(j = 0;j < 5-i;j++){
			printf("%X ",pos[0]);
		}
		for(i--;i > 0;i--){
			printf("%X ",pos[res[i]]);
		}
		printf("%X\n",pos[res[i]]);
		
		ch = getchar();//∂‡”‡ø’∞◊∑˚ÕÃ»Î 
		while(ch < '0' || ch > '9')ch = getchar();
	}
	return 0;
}

