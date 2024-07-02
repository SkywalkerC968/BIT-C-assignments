#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
	FILE*fp;
	char file[41] = {0},line[41] = {0},ch;
	int n = 0,i = 0,flag = 0;
	gets(file);
	scanf("\n%d",&n);
	if((fp = fopen(file,"r")) == NULL)printf("File Name Error.\n");
	else if(n == 1){
		i = 0;
		fgets(line,41,fp);
		while(line[i])printf("%c",line[i++]);
		for(i = 0;line[strlen(line)-1] != '\n';){
			fgets(line,41,fp);
			while(line[i])printf("%c",line[i++]);
		}
	}
	else{
		while(fgets(line,41,fp) != NULL){
			if(line[strlen(line)-1] == '\n')i++;
			if(i == n-1){
				flag = 1;
				break;
			}
		}
		if(flag){
			i = 0;
			if(fgets(line,41,fp) != NULL){
				while(line[i])printf("%c",line[i++]);
				for(i = 0;line[strlen(line)-1] != '\n';i = 0){//你要到什么时候才能避免这种补丁式代码？？？ 
					fgets(line,41,fp);
					while(line[i])printf("%c",line[i++]);
				}
			}
			else printf("Line No Error.\n");
		}
		else printf("Line No Error.\n");
	} 
	return 0;
}

