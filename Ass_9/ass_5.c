#include <stdio.h>  
#include <stdlib.h>  
  
int merge_sort(char *a,char *b,char *c);   
int main(int argc, char *argv[]) {  
          
    char a[100];  
    char b[100];  
    char c[200];  
  
    gets(a);  
    gets(b);  
   	merge_sort(a,b,c);  
    puts(c);  
    return 0;  
}  

int merge_sort(char *a,char *b,char *c){
	int i = 0;
	for(;i < 200;i++)c[i] = '\0';
//	c的初始化非常重要，否则很有可能提前结束或者无法正常结束 
	while(*a != '\0' && *b != '\0'){
		if(*a < *b)*c++ = *a++;
		else if(*a > *b)*c++ = *b++;
		else{
			*c++ = *a++;
			*c++ = *b++;
		}
	}
	if(*a)while(*a)*c++ = *a++;
	else while(*b)*c++ = *b++;
	return 0; 
}
