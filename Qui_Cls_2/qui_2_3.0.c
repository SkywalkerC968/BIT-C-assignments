#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define lim 41
/*靠自己学！他已经给你送到这了！*/ 

char s1[lim] = {0},s2[lim] = {0},res[lim][lim] = {0},s3[lim] = {0};
int dp[lim][lim],s1len,s2len;

int max(int a,int b){
	if(a >= b)return a;
	else return b;
}

int LCS(int a,int c){
//	看似和末尾重复了，但是必须在进入函数的时候就判断是否已经进行了计算，才能实现记忆化的作用 
	if(dp[a][c] != -1)return dp[a][c];
	if(a == 0 || c == 0)return 0;
	else if(s1[a-1] == s2[c-1])dp[a][c] = LCS(a-1,c-1) + 1;
	else dp[a][c] = max(LCS(a-1,c),LCS(a,c-1));
	return dp[a][c];
}

//char Trace(int a,int c){//dp矩阵比字符串长度大1，留出左上边缘用于判定 
//	if(a <= 0 || c <= 0);
//	if(dp[a][c] > dp[a-1][c] && dp[a][c] > dp[a][c-1]){ 
////		同节点多路径漏洞非常严峻 
//		Trace(a-1,c-1);
//		*ps++ = s1[a-1];
//	}
//	if(dp[a][c] == dp[a-1][c])Trace(a-1,c);
//	if(dp[a][c] == dp[a][c-1])Trace(a,c-1);
//}

void find(int x,int y,int z){
	int i;
	
	if(y == s2len || x == s1len)return;
	find(x,y+1,z);
	find(x+1,y,z);
} 

int main(){
	gets(s1);
	gets(s2);
	int i = 0,j = 0,mxl = 0;
	s1len = strlen(s1),s2len = strlen(s2);
	for(;i < lim;i++){//初始化表格，便于后续记忆化操作 
		for(j = 0;j < lim;j++){
			dp[i][j] = -1;
		}
	}
	mxl = LCS(s1len,s2len);
	//打印dp矩阵 
	for(i = 0;i <= s1len;i++){ 
		for(j = 0;j <= s2len;j++){
			printf("%d\t",dp[i][j]);
		}
		printf("\n");
	}
	find(0,0,0);
	
	return 0;
} 


