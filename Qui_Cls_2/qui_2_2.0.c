#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
/*±¬Ì°ËùÓĞ×Ó´®°É*/ 

int max(int a,int b){
	if(a >= b)return a;
	else return b;
}

int min(int a,int b){
	if(a <= b)return a;
	else return b;
}

long long int power(int x,int y){
	int i;
	long long int p = 1;
	for(i = 0;i < y;i++){
		p *= x;
	}
	return p;
}

char substr(char*si,char**s,int silen,int sublen,int i){
	int j = 0;
	if(j < sublen){
		substr(si,s,silen,sublen,j+1);
	}
	for(j--;j < silen-sublen+i;j++){
		**(s+j+i) = *(si+j);
		*s++;
	}
}

int main() {
	char s1[41] = {0},s2[41] = {0},sub1[power(2,41)-1][41],sub2[power(2,41)-1][41];
	gets(s1);
	gets(s2);
	int i = 0,j = 0,mxl = 0,s1len = strlen(s1),s2len = strlen(s2); 
	for(i = 0;i < s1len;i++){
		substr(s1,sub1,s1len,i,0);
	}
	for(i = 0;i < s2len;i++){
		substr(s2,sub2,s2len,i,0);
	}
	for(i = 0;i < power(2,max(s1len,s2len))-1;i++){
		for(j = 0;j < power(2,min(s1len,s2len))-1;j++){
			if(strcmp(sub1[i],sub2[j]) == 0)mxl = strlen(sub1[i]);	
		}
	}
	printf("%d\n",mxl);
	return 0;
}

