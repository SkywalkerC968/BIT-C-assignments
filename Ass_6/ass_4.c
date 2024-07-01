#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define lim 520

int loc(char s[]){
	int i = 0,slen = 0,op = 0;
	slen = strlen(s);
	for(;i < slen;i++){
		if(s[i] == '+' || s[i] == '-'){
			op = i;
			break;
		}
	}
	
	return op;
}

void add(int a[],int b[],int len){
	int bi = 0,de = 0,i = 0,c[lim+1] = {0};
	for(;i <= len;i++){
		bi = a[i] + b[i] + bi/10;
		c[i] = bi%10;
	}
	while(c[i] == 0){
		i--;
		if(i < 0){
			printf("0");
			break;
		}
	}
	for(;i >= 0;i--){
		printf("%d",c[i]);
	}

	printf("\n");
}

void sub(int a[],int b[],int len){
	int bi = 0,de = 0,i = 0,c[lim] = {0};
	for(;i < len;i++){
		bi = a[i] - b[i] + floor((double)bi/10.0);
		if(bi < 0)c[i] = bi + 10;
		else c[i] = bi;
	}
	while(c[i] == 0){
		i--;
		if(i < 0){
			printf("0");
			break;
		}
	}
	for(;i >= 0;i--){
		printf("%d",c[i]);
	}

	printf("\n");
}

int main() {
	int n = 0,j = 0;
	scanf("%d",&n);
	for(;j < n;j++){
		int i = 0,slen = 0,op = 0,a[lim] = {0},b[lim] = {0};
		char A[lim],B[lim],s[lim*2];
		scanf("%s",s);
		op = loc(s);
		slen = strlen(s);
		for(i = slen-1;i > op;i--){
			b[slen-i-1] = s[i]-'0';
			B[i-op-1] = s[i];
		}
		B[slen-op-1] = '\0';
		for(i = op-1;i >= 0;i--){
			a[op-1-i] = s[i]-'0';
			A[i] = s[i];
		}
		A[op] = '\0';
		
		if(2*op > slen-1){
			if(s[op] == '+'){
				add(a,b,op);
			}
			else{
				sub(a,b,op);
			}
		}
		else if(2*op < slen-1){
			if(s[op] == '+'){
				add(b,a,slen-1-op);
			}
			else{
				printf("-");
				sub(b,a,slen-1-op);
			}
		} 
		else{
			if(s[op] == '+'){
				add(a,b,op);
			}
			else{
				if(strcmp(A,B) >= 0)sub(a,b,op);
				else{
					printf("-");
					sub(b,a,op);
				}
			}
		}
	}
	
	return 0;
}

