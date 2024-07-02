#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define LIM (int)1e6
//long long 不能承受之重
 
long long int T[LIM],S[LIM];

long long int Power(int x,int y){
	int p = 1;
	while(y--){
		p *= x;
	}
	return p;
}

void Initialize1(char*in,int len){//初始化为全‘a’ 
	int i;
	for(i = 0;i < len;i++){
		*in++ = 'a';
	}
	*in = '\0';
}

void Through(int len,char get[400]){
//遍历所有长度为len的get子串，不必遍历全部 
	int i,j,glen = strlen(get);
	for(i = 0;i < glen-len+1;i++){
		S[i] = 0;
		for(j = 0;j < len;j++){
			S[i] += Power(26,j)*(get[i+len-1-j]-97);
		}
	}
}

long long int Convert(char s[400]){
	int i,Con = 0,slen = strlen(s);
	for(i = 0;i < slen;i++){
		Con += Power(26,i)*(s[slen-1-i]-97);
	}
	return Con;
}

int Compare(int start,int stop,char S[LIM][400],char*str){//检测get中是否有给定字串 
	int i;
	for(i = start;i < stop;i++){
		if(!strcmp(S[i],str))return 1;
	}
	return 0;
}

int Print(int len,long long int x){
	if(len <= 0)return 0;
	else Print(len-1,x/26);
	putchar(x%26+97);
	return 0;
}

int main() {
	char get[400],s[400];
	int n,i,len,glen,flag,lst[200][2];
	scanf("%s",get);
	glen = strlen(get);
	scanf("%d",&n);
	for(i = 0;i < n;i++){
		scanf("%d%d",&lst[i][0],&lst[i][1]);
	} 
	for(i = 0;i < n;i++){
		int j,k;
		long long int tmp;
		len = lst[i][1]-lst[i][0]+1;
		strncpy(s,get+lst[i][0]-1,len);
		*(s+len) = '\0';
		T[i] = Convert(s);
		Through(len,get);
//		printf("%d\n",T[i]);
		tmp = T[i]-1;
		if(tmp < 0){
			printf("NULL\n");
			printf("Happy Chinese New Year!\n");
		}
		else{
			Print(len,tmp);
			putchar('\n');
			for(j = 0;j < glen-len+1;j++){
				if(S[j] == tmp){
					printf("Happy New Year!\n");
					break;
				}
			}
			if(j == glen-len+1)printf("Happy Chinese New Year!\n");
		}
		
	} 
	return 0;
}

