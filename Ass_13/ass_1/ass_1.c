#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

struct Password{
	char in;
	char out;
}lst[41];

int main() {
	char mima[41] = {0},file[41] = {0},ch;
	int i = 0,len = 0;
	FILE *fp;
	gets(mima); 
	gets(file);
	fp = fopen(mima,"r");
	do{
		lst[i].in = fgetc(fp);
		fgetc(fp);
		lst[i].out = fgetc(fp);	
		i++;
	}while((ch = fgetc(fp)) != EOF);//这样的读入其实有瑕疵，只是通过了后面输出时规避瑕疵 
	len = i-1;
	fp = fopen(file,"r");
	for(ch = fgetc(fp);ch != EOF;ch = fgetc(fp)){
		for(i = 0;i < len && ch != lst[i].in;i++);
		if(i == len)printf("%c",ch);
		else printf("%c",lst[i].out);
	}
	return 0;
}

