#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

struct Stu{
	char *name,arr[14];
	int score;
};

void sortscore(struct Stu*pstu,struct Stu term,int count){
	struct Stu*pend = pstu;
	pend += count-1;
	for(;pend > pstu;pstu++){
		if(pstu->score < term.score)break;
	}
	for(;pend >= pstu;pend--)*(pend+1) = *pend;
	*pstu = term;
}

int main() {
	int n = 0,i = 0,count = 1;
	struct Stu cls[41],term; 
	scanf("%d\n",&n);
	for(;i < n;i++){
		char ch;
		term.name = term.arr;//需要给指针申请空间才能正常使用 
		for(ch = getchar();ch != ',';ch = getchar()){
			*term.name++ = ch;
		}
		*term.name = '\0';
		term.score = 0;
		for(ch = getchar();ch != '\n';term.score = (term.score<<1)+(term.score<<3)+(ch^48),ch = getchar());
		sortscore(cls,term,count++);
	}
	for(i = 0;i < n;i++){
		printf("%s,%d\n",cls[i].arr,cls[i].score);
	}
	return 0;
}


