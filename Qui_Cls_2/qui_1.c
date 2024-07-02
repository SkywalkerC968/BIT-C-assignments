#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int f(int m,int n){
	int i = 0,j = 0,cot = 0,res = 0;
	if(n==1)return 1;
	else if(m == n && n != 1)return f(m,n-1) + 1;
	else{
		while(n > 1){
			cot = m/n;
			if(m%n){
				for(i = 1;i <= cot;i++){
					res += f(m-i*n,m%n);
				}
				n--;
			}
			else{
				res += f(m-n,n);
				n--;
			}
		}
		return res+f(m,1);
	}
	
}

int main() {
	int m = 0,n = 0,i = 0;
	scanf("%d%d",&m,&n);
	printf("%d\n",f(m,n));
	return 0;
}

