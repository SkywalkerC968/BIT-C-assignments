#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define LIM (int)1e4

char S[LIM][400];

void Through(int len,char get[400]){
	int i,glen = strlen(get);
	for(i = 0;i < glen-len+1;i++){
		strncpy(S[i],get+i,len);
		*(S[i]+len) = '\0';
	}
} 

int Calculate(int len,char s[400]){
	if(len <= 0)return 0;
	int flag = 0;
	s[len-1]--;
	if(s[len-1] < 97){
		s[len-1] += 26;
		flag = 1;
	}
	if(flag)Calculate(len-1,s);
	else return 1;
}

int Compare(int lim,char s[400],char S[LIM][400]){
	int i;
	for(i = 0;i < lim;i++){
		if(!strcmp(S[i],s))return 1;
	}
	return 0;
}

int main() {
	char get[400],s[400];
	int n,i,glen,lst[200][2];
	scanf("%s",get);
	glen = strlen(get);
	scanf("%d",&n);
	for(i = 0;i < n;i++){
		scanf("%d%d",&lst[i][0],&lst[i][1]);
	}
	for(i = 0;i < n;i++){
		int len = lst[i][1]-lst[i][0]+1,flag;
		strncpy(s,get+lst[i][0]-1,len);
		*(s+len) = '\0';
		Through(len,get);
		flag = Calculate(len,s);
		if(!flag)printf("NULL\nHappy Chinese New Year!\n");
		else{
			printf("%s\n",s);
			flag = Compare(glen-len+1,s,S);
			if(flag)printf("Happy New Year!\n");
			else printf("Happy Chinese New Year!\n");
		}
	}
	return 0;
}

