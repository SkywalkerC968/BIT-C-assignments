#include <stdio.h>
#include <string.h>
#include <math.h>

void format(char*u,int m,int N){
	int i = 0,j = 0,tmp = m;
	for(;i < N;i++)u[i] = '0';
	u[N] = '\0';
	i = 1;
	while(tmp){
		u[N-i] = tmp%10 + '0';
		tmp /= 10;
		i++;
	}
}

int main(){
	int m = 0,n = 0,N = 0,M = 0,i = 0,j = 0,loc = 0,flag = 0,slen = 0;
	char u[11],s[41],swp,tra;
	scanf("%d,%d\n",&m,&n);
	gets(s);
	slen = strlen(s);
	N = log10((double)n)+1;
	M = log10((double)m)+1;
	for(;i < slen;i++){
		if(s[i] == '.')break;
	}
	loc = i;
	for(i = slen;i >= loc;i--){
		s[i+N] = s[i]; 
	}
	for(;j <= n-m;j++){
		format(u,m+j,N);
		for(i = 0;i < N;i++){
			s[loc+i] = u[i];
		}
		puts(s); 
	}
	
	return 0;
}

