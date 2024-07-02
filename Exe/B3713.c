#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

char *std[101],sub[101][500],stu[10][20],pro[10][20];

char* Concatenation(char stu[20],char pro[20]){
	int i;
	char* tmp;
	tmp = (char*)malloc(sizeof(char)*500);
	*tmp = '\0';
	strcat(tmp,stu);
	strcat(tmp,".zip/");
	printf("%s",tmp);
	strcat(tmp,stu);
	strcat(tmp,"/");
	strcat(tmp,pro);
	strcat(tmp,"/");
	strcat(tmp,pro);
	strcat(tmp,".cpp");
	return tmp;
}

void Format(int n,int m,char pro[10][20],char stu[10][20]){
	int i,j;
	for(i = 0;i < n;i++){
		for(j = 0;j < m;j++){
			std[i*m+j] = (char*)malloc(sizeof(char)*500);
			std[i*m+j] = Concatenation(stu[i],pro[j]);
		}
	}
}

int main() {
	int i,n,m;
	char tmp[20];
	scanf("%d%d",&n,&m);
	for(i = 0;i < m;i++){
		scanf("%s",tmp);
		strcpy(pro[i],tmp);
	}
	for(i = 0;i < n;i++){
		int j;
		scanf("%s",tmp);
		strcpy(stu[i],tmp);
		for(j = 0;j < m;j++){
			scanf("%s",tmp);
			strcpy(sub[i*m+j],tmp);
		}
	}
	Format(n,m,pro,stu);
	for(i = 0;i < n*m;i++){
		if(!strcmp(std[i],sub[i]))printf("Fusu is happy!\n");
		else printf("Fusu is angry!\n"); 
	}
	return 0;
}

