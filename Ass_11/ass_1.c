#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int N = 0,i = 0;
	scanf("%d",&N);
	struct Person{
		char name[14];
		int mny;
	}comm[10]; 
	for(;i < N;i++){
		scanf("%s\n",comm[i].name);
		comm[i].mny = 0;
	}
	for(i = 0;i < N;i++){
		char s[14];
		int j = 0,k = 0,l = 0,mny = 0,n = 0;
		gets(s);
		scanf("%d %d\n",&mny,&n);
		for(j = 0;j < N;j++){
			if(strcmp(s,comm[j].name) == 0){
				comm[j].mny -= mny;
				for(k = 0;k < n;k++){
					char tmp[14];
					gets(tmp);
					for(l = 0;l < N;l++){
						if(strcmp(tmp,comm[l].name) == 0)comm[l].mny += mny/n;
					}
				}
				comm[j].mny += n ? mny%n : n;
				break;
			}
		}
	}
	for(i = 0;i < N;i++){
		printf("%s %d\n",comm[i].name,comm[i].mny);
	}
	return 0;
}

