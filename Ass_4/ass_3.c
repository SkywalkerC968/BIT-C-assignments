#include <stdio.h>
#include <math.h>
#include <stdlib.h>
//蠢！！！ 
//int N(int n){
//	int i = 0,j = 0;
//	for(i = 1;i <= log(n);i++){
//		if(n >= 10){
//			for(j = 1;j <= i;j++){
//			n /= 10;
//			}
//		}
//		else break;
//	}
//	return i+1;
//}

int main() {
	int n = 0,N = 0,k = 0,i = 0,j = 0,tmp = 0;
	scanf("%d",&n);
	N = (int)log10(n)+1;
	int a[N];
	for(i = 1;i <= N;i++){
		a[i-1] = n%10;
		n /= 10;
	}
	
//	for(i = 1;i <= N;i++){
//		printf("%d ",a[i-1]);
//	}
	
//	b[N] = ord(a[N],N);这种赋值方式不能用！！！ 
	
//	for(i = 0;i < N;i++){
//		b[i] = ord(a[N],N)[i]; 
//	}
//	荒谬！

	ord(a,N); 
	
//	for(i = 0;i < N;i++){
//		printf("%d",a[i]);
//	}
	
	for(i = 1;i <= N;i++){
		tmp = a[i-1];
		for(j = 1;j <= N-i;j++){
			tmp *= 10; 
		}
		k += tmp;
	}
	
	printf("%d\n",k);
	return 0;
}

//定义c数组困难。不如用循环。 
//int p = 0,c[10000] = {0},max = a[p],tmp = p;
//
//int ord(int a[],int n,int N){
//	if(n == N){
//		c[p] = max;
//		p++;
//		if(p == N) return c;
//		else {
//			a[tmp] = 0;
//			ord(a,1,N);
//		}
//	}
//	else{
//		if(a[p] >= a[n]) ord(a,n+1,N);
//		else {
//			max = a[n];
//			tmp = n;
//			ord(a,n+1,N);
//		}
//
//	}
//}

void ord(int a[],int N){
	int i = 0,j = 0,tmp = 0;
	for(i = 0;i < N;i++){
		for(j = i+1;j < N;j++){
			if(a[j]>a[i]){
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}

} 

