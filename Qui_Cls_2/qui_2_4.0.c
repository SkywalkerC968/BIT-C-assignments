#include<stdio.h>
#define Mx 100

int l1,l2,s1[Mx+5],s2[Mx+5],F[Mx+5][Mx+5];
inline int ck(char ch)
{
	return ch==32||ch==10||ch==EOF||ch=='\r'||ch=='\0'?0:ch;//查验非法字符，便于读入 
}
#define gc getchar
#define pc putchar
inline char gt()
{
	char ch;
	for(ch=gc();!ck(ch);ch=gc());//读入，应该能够比预置空值能涵盖更广的情况 
	return ch;
}
int ans,chr[Mx+5];
inline void Slv(int x,int y,int z);
inline void Get(int a,int b,int x,int y,int z)
{
	int i,j;
	chr[z]=s1[a];//跳跃前记录 
	Slv(a-1,b-1,z-1);//边界对角，相邻跳跃 
	for(i=a;i<=x&&F[i][b-1]^z;i++);//先按位异或，后逻辑与，找到当初先向左的位置，并判断是否合法 
	if(i>x)return;//当初就不能向左，退出 
	for(j=b;j&&F[i][j]==z;j--);//向左找到边界 
	j++;
	Get(i,j,x,y,z);//等价于循环 
}
inline void Slv(int x,int y,int z)
{
	if(!z)//输出LCS子列 
	{
		int i;
		for(i=1;i<=ans;i++)pc(chr[i]);
		pc(10);//输出'\n' 
		return;
	}
	int i,j;
	for(i=x;i&&F[i][y]==z;i--);//以特定顺序（先上后左）的方式找到当前长度在dp表的边界 
	i++;
	for(j=y;j&&F[i][j]==z;j--);
	j++;
	Get(i,j,x,y,z);//等价于循环 
}
inline int Max(int x,int y)
{
	return x>y?x:y;
}
#define output 0
signed main()
{
	int i,j;char ch;
	for(ch=gt();ck(ch);ch=gc())s1[++l1]=ck(ch);//读出str1长度 
	for(ch=gt();ck(ch);ch=gc())s2[++l2]=ck(ch);//读出str2长度 
	for(i=1;i<=l1;i++)for(j=1;j<=l2;j++)if(s1[i]==s2[j])F[i][j]=F[i-1][j-1]+1;else F[i][j]=Max(F[i-1][j],F[i][j-1]);//找到LCS长度 
	Slv(l1,l2,ans=F[l1][l2]);//通过上下单向操作保证唯一性和完备性 
	return output;
}

