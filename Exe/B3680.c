#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

typedef struct Character{
	char name[11];
	char team;
	long long int fam;
}ROLE;

ROLE lst[200000],patr[100000],antg[100000];//lst读入乱序总列表，patr好人列表，antg坏人列表 

void sort(ROLE* lst,int n,int m){
	int i,j,k;
	ROLE tmp;
	for(i = 0,j = 0,k = 0;i < n+m;i++){//遍历lst，完成好坏分堆 
		if(lst[i].team == 'S')patr[j++] = lst[i];
		else antg[k++] = lst[i];
	}
	for(i = 0;i < 9;i++){//只需排序好人前9（5ban+4pick） 
		for(j = 0;j < n-i-1;j++){
			if(patr[j].fam>patr[j+1].fam){
				tmp = patr[j];
				patr[j] = patr[j+1];
				patr[j+1] = tmp;
			}
		}
	}
	for(i = 0;i < 3;i++){//只需排序坏人前3（2ban+1pick） 
		for(j = 0;j < m-i-1;j++){
			if(antg[j].fam>antg[j+1].fam){
				tmp = antg[j];
				antg[j] = antg[j+1];
				antg[j+1] = tmp;
			}
		}
	}
}

void read(long long int i){
	int n = 0;
	long long int f = 0;
	char ch; 
	for(ch = getchar();ch != ' '&&'a'<=ch&&ch<='z'||'A'<=ch&&ch<='Z';ch = getchar()){//读入名字
		lst[i].name[n++] = ch;
	}
	lst[i].name[n] = '\0';//字符串末尾补充 
	lst[i].team = getchar();//读入站队 
	getchar();//读入多余空格 
	for(ch = getchar();ch != '\n'&&'0'<=ch&&ch<='9';f = (f<<1)+(f<<3)+(ch^48),ch = getchar());//读入熟练度 
	lst[i].fam = f;
}

int main() {
	int n,m,i,j;
	scanf("%d%d\n",&n,&m);
	for(i = 0;i < n+m;i++)read(i);
	
	sort(lst,n,m);
	
	puts(antg[m-3].name);
	for(i = 0;i < 4;i++){
		puts(patr[n-6-i].name);
	}
	return 0;
}

