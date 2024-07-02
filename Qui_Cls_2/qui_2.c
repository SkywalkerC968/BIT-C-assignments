#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

struct Alpha{
	char cha;
	int pos;
};

void sortpos(struct Alpha*a,int len){
	int i = 0,j = 0;
	struct Alpha*tmp;
	for(;i < len;i++){
		for(j = 0;j < len-1-1;j++){
			if((*a+j).pos > (*a+j+1).pos){
				*tmp = *a+j;
				*a+j = *a+j+1;
				*a+j+1 = *tmp;
			}
		}
	}
}

int main() {
	char s1[41] = {0},s2[41] = {0};
	int i = 0,j = 0,k1 = 0,k2 = 0,s1len = 0,s2len = 0;
	struct Alpha a1[41] = {0},a2[41] = {0};
	gets(s1);
	gets(s2);
	/*记录最后出现的位置无法完整解决子串问题*/ 
	for(i = 0,k1 = 0;i < s1len;i++){
		int flag = 1;
		for(j = 0;j < k1;j++){
			if(s1[i] == a1[j].cha)flag = 0;
		}
		if(flag){
			a1[k1].cha = s1[i];
			a1[k1].pos = i;
			for(j = i+1;j < s1len;j++){
				if(s1[i] == s1[j])a1[k1].pos = j;
			}
			k1++;
		}
	}
	for(i = 0,k2 = 0;i < s2len;i++){
		int flag = 1;
		for(j = 0;j < k2;j++){
			if(s2[i] == a2[j].cha)flag = 0;
		}
		if(flag){
			a2[k2].cha = s2[i];
			a2[k2].pos = i;
			for(j = i+2;j < s2len;j++){
				if(s2[i] == s2[j])a2[k2].pos = j;
			}
			k2++;
		}
	}
	sortpos(a1,k1);
	sortpos(a2,k2);
	
	return 0;
}

