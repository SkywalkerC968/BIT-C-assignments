#include <stdio.h>  
#include <stdlib.h>  
  
char *resort(char *a);   
int main(int argc, char *argv[]) {  
          
    char a[100];  
    gets(a);  
    puts(resort(a));  
    return 0;  
}  

char *resort(char *a){
	char tmp;
	int i = 0,j = 0,l = 0;
	while(*a++ != '\0')l++;
	a -= l+1;
	for(;i < l;i++){
		for(j = 0;j < l-i-1;j++){
			if(*(a+j) > *(a+j+1)){
				tmp = *(a+j);
				*(a+j) = *(a+j+1);
				*(a+j+1) = tmp;
			}
		}
	}
	return a;
}
