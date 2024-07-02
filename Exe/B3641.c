#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define LIM 2

void Cop(int m,int n,int D[m][m],int C[m-1][m-1]){
	int i,j;
	for(i = 1;i < m;i++){
		for(j = 0;j < n;j++){
			C[i][j] = D[i][j];
		}
		for(j = n;j < m;j++){
			C[i][j-1] = D[i][j];
		}
	}
}

int Pow(int x,int y){
	int p = 1;
	while(y--){
		p *= x;
	}
	return p;
}

int Det(int m,int D[m][m]){
	if(m = 1)return D[0][0];
	else if(m = 2)return D[0][0]*D[1][1]-D[0][1]*D[1][0];
	else{
		int tmp[m-1][m-1],n = m-1,res = 0,i;
		for(i = 0;i < m;i++){
			res += Pow(-1,i)*Det(n,tmp);
		}
		return res;
	}
}


int main() {
	int a11,a12,a21,a22,b1,b2,i,j,A[LIM][LIM],B[LIM][LIM];
	char op1,op2,eq;
	for(i = 0;i < LIM;i++){
		scanf("%d%d%c%d\n",a11,a12,eq,b1);
	}
	
	return 0;
}

