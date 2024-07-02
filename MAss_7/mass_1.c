#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

void sort(int* p,int len){//ц╟ещеепР 
	int i = 0,j = 0,tmp = 0;
	for(;i < len-1;i++){
		for(j = 0;j < len-i-1;j++){
			if(p[j] > p[j+1]){
				tmp = p[j];
				p[j] = p[j+1];
				p[j+1] = tmp;
			}
		}
	}
}

int main() {
	int i = 0,a[41] = {0};
	char ch = getchar();
	for(;ch != EOF;ch = getchar(),i++)a[i] = ch - '0';
	sort(a,i);
	while(i--){
		putchar(a[i] + '0');
	}
	putchar('\n');
	return 0;
}

