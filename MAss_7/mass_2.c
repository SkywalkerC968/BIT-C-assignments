#include <math.h>
#include <stdlib.h>
#include <string.h>

int split(int n,int*s){
	int i = n,j = 0;
	while(i){
		s[j] = i%10;
		i /= 10;
		j++;
	}
	return j;
}

int check(int*s,int slen,int i){
	if(s[i] == s[slen-i-1])check(s,slen,i+1);
	else if(i > slen-1-i)return 1;
	else return 0;
}

int main() {
	int slen = 0,flag = 0,n = 0,i = 1,s[65541] = {0};
	scanf("%d",&n);
	for(;i < n;i++){
		slen = split(i*i,s);
		flag = check(s,slen,0);
		if(flag)printf("%d\n",i);
	}

	return 0;
}
