#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

//	数据规模较大，似乎这样快读效率更高 
int read(){
	char ch = getchar();
	int x = 0;
	for(;'0'<=ch&&ch<='9';x = (x<<1)+(x<<3)+(ch^48),ch = getchar());
	return x;
}

int main() {
	int n,m,i,j,res = 1,a[(int)5e4],b[(int)5e4],flg[(int)5e4+2] = {0};
	n = read();
	m = read();
	for(i = 0;i < n;i++)a[i] = read();
	for(i = 0;i < m;i++)b[i] = read();
//	设置flg首位边界，便于后续异或操作计算片段数目	
	flg[0] = 1;
	for(j = 0;j < m;j++){
		for(i = 0;i < n;i++){
			if(a[i] == b[j])flg[i+1] = 1;
		}
		flg[i+1] = 1;
	}
//	利用边界1值，使所有分段点均一前一后计算两次	
	for(i = 0;i < n;i++){
		if(flg[i]^flg[i+1])res++;
	}
	printf("%d",res/2);
	return 0;
}

