#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int h = 0,i = 0,j = 0;
	char x;
	scanf("%c%d",&x,&h);
	for(i = h-1;i > 0;i--){
		for(j = i;j > 0;j--){
			putchar(' ');
		}
		putchar(x++);
		if(i == h-1)putchar('\n');
		else{
			for(j = 0;j < (h-i-2)*2+1;j++,x++){
				putchar(' ');
			}
			putchar(x++);
			putchar('\n');
		}
		if(x>90 && x<97)x = 'A';
		else if(x > 122)x = 'a';
	}
	for(i = 0;i < 2*h-1;i++){
		putchar(x++);
		if(x>90 && x<97)x = 'A';
		else if(x > 122)x = 'a';
	}
	putchar('\n');
	return 0;
}

