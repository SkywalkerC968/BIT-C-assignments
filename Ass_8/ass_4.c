#include <string.h>
#include <stdio.h>  

int countsub(char *str,char *ss); 
  
int main( )  
{  
    char s1[1000] = {0}, s2[100] = {0};  
    gets(s1);  
    gets(s2);  
    printf("%d\n",countsub(s1,s2));
    
    return 0;
}  

int max(int*n){
	int i = 0,max = n[0];
	for(;i < 1000;i++){
		max = max > n[i] ? max : n[i];
	}
	return max;
}

int countsub(char *str,char *ss){
	int i = 0,j = 0,k = 0,sslen = strlen(ss),n[1000] = {0};
	while(str[i-1] != '\0' || i == 0){
		for(j = 0;j < sslen;j++){
			if(str[i+j] != ss[j])break;	
		}
		if(j == sslen){
			k++;
			i += sslen;
		}
		else{
			n[i] = k;
			k = 0;
			i++;
		}
	}
	return max(n);
}
