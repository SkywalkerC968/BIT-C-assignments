#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
	FILE*fp;
	char file[41],line[41],ch;
	int n = 0,i = 0;
	gets(file);
	scanf("\n%d",&n);
	if((fp = fopen(file,"r")) == NULL)printf("File Name Error.\n");
	else{
		while((ch = fgetc(fp)) != EOF){
			if(ch == '\n')i++;//对于初始换行无能为力 
			if(i == n-1)break;
		}
		if(ch == EOF)printf("Line No Error.");
		if(i == n-1){
			while((ch = fgetc(fp)) != '\n' && ch != EOF)printf("%c",ch);//以换行符作为判断本就不够充分 
			if(ch == EOF)printf("Line No Error.");
		}
		printf("\n");
	} 
	return 0;
}

