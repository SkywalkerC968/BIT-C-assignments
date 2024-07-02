#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define LIM 7 


char a[LIM],code[] = {'9','0','1','2','3','4','5','6','7','8','9','0'};//补充两边界 
char lst[729][LIM];

char* Format(char*a,int n){//将输入字符串格式化为n位（补充前导零） 
	int i,len = strlen(a);
	char f[6] = {0};
	for(i = 1;i <= n-len;i++){
		strcat(f,"0");
	}
	strcat(f,a);//连接只能后连前，而且是改动的前一字符串变量 
	strcpy(a,f);//字符串只能用复制，不能用赋值 
	return a;
}

int Convert(int x,int t,int i,int n){
//	x表示当前选择了x个位置，t表示一共需要选择位置数，i为索引位置，n为数组长度 
	static int c = 0;
	int j;
	if(i > n)return 0;
	if(x == t && i == n){
		for(j = 0;j < n;j++){
			lst[c][j] = a[j];
		}
		c++;
	}
	
	Convert(x,t,i+1,n);//不选当前位置 
	
	a[i] = code[a[i]-48];//选择当前位置并将其-1 
	Convert(x+1,t,i+1,n);
	a[i] = code[a[i]-46];//归位 
	
	a[i] = code[a[i]-46];//选择当前位置并将其+1 
	Convert(x+1,t,i+1,n);
	a[i] = code[a[i]-48];//归位 
	
	return c;
}

void Sort(int c){
	int i,j;
	char(*tmp)[LIM];
	tmp = (char*)malloc(sizeof(char)*LIM);//必须要给指针开空间！！！否则就是RE错误，只是本地规避了 
	for(i = 0;i < c;i++){
		for(j = 0;j < c-i-1;j++){
			if(strcmp(lst[j],lst[j+1]) > 0){//字符串只能使用复制操作交换位置 
				strcpy(*tmp,lst[j]);
				strcpy(lst[j],lst[j+1]);
				strcpy(lst[j+1],*tmp);
			}
		}
	}
}

int power(int x,int y){
	int p = 1;
	while(y--){
		p *= x;
	}
	return p;
}

int main() {
	int n,i,c,k;
	char* p = a;
	scanf("%d%s%d",&n,a,&k);
	
	Format(p,n);
	
	for(i = 0,c = 0;i <= k;i++){
		c = Convert(0,i,0,n);//c在函数中为static变量，最后一次运行的函数保留最终c值 
	}

	Sort(c);

	for(i = 0;i < c;i++){//将字符串转为数字，自动去掉前导零 
		int j,tmp = 0;
		for(j = 0;j < n;j++){
			tmp += power(10,n-j-1)*(lst[i][j]-48);
		}
		printf("%d\n",tmp);
	}
	return 0;
}

