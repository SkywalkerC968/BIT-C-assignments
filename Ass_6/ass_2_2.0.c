#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int i = 0;

int max(int* a,int i){
	int max = a[0],j = 0;
	for(j = 0;j < i-1;j++){
		max = max > a[j] ? max : a[j];
	}
	return max;
}

int min(int* a,int i){
	int min = a[0],j = 0;
	for(j = 0;j < i-1;j++){
		min = min < a[j] ? min : a[j];
	}
	return min;
}

int read(int* a){
	char ch = getchar();
	int flag = 0,de = 0,op = 0;
	while(ch != '='){
	
		for(;ch<'0' || ch>'9';){
			if(ch == ','){
				a[i] = flag ? -de : de;
				flag = 0;
				de = 0;
				i++;
				ch = getchar();
			}
			else if(ch == '='){
				break;
			}
			else{
				if(ch == '-' ){
					op = 0;
					flag = 1;
				}
				else if(ch == '+')op = 1;
				else if(ch == '*')op = 2;
				else if(ch == '/')op = 3;
				else if(ch == '%')op = 4;
				ch = getchar();
			}
		}
		for(;ch>='0' && ch<='9';de = (de<<1)+(de<<3)+(ch^48),ch = getchar());
		
	}

	return op;
}

int main() {
	int a[41] = {0},n = 0,N = 0,op = 0;
	
	op = read(a);
	
	n = min(a,i);
	N = max(a,i);
	switch(op){
		case 1:
			if(n < 0 && N >= 0)printf("%d + (%d) = %d\n",N,n,N+n);
			else if(N < 0 && n >= 0)printf("(%d) + %d = %d\n",N,n,N+n);
			else if(N < 0 && n < 0)printf("(%d) + (%d) = %d\n",N,n,N+n);
			else printf("%d + %d = %d\n",N,n,N+n); 
			break;
		case 0:
			if(n < 0 && N >= 0)printf("%d - (%d) = %d\n",N,n,N-n);
			else if(N < 0 && n >= 0)printf("(%d) - %d = %d\n",N,n,N-n);
			else if(N < 0 && n < 0)printf("(%d) - (%d) = %d\n",N,n,N-n);
			else printf("%d - %d = %d\n",N,n,N-n); 
			break;
		case 2:
			if(n < 0 && N >= 0)printf("%d * (%d) = %d\n",N,n,N*n);
			else if(N < 0 && n >= 0)printf("(%d) * %d = %d\n",N,n,N*n);
			else if(N < 0 && n < 0)printf("(%d) * (%d) = %d\n",N,n,N*n);
			else printf("%d * %d = %d\n",N,n,N*n); 
			break;
		case 3:
			if(n < 0 && N >= 0)printf("%d / (%d) = %d\n",N,n,N/n);
			else if(N < 0 && n >= 0)printf("(%d) / %d = %d\n",N,n,N/n);
			else if(N < 0 && n < 0)printf("(%d) / (%d) = %d\n",N,n,N/n);
			else printf("%d / %d = %d\n",N,n,N/n); 
			break;
		case 4:
			if(n < 0 && N >= 0)printf("%d %% (%d) = %d\n",N,n,N%n);
			else if(N < 0 && n >= 0)printf("(%d) %% %d = %d\n",N,n,N%n);
			else if(N < 0 && n < 0)printf("(%d) %% (%d) = %d\n",N,n,N%n);
			else printf("%d %% %d = %d\n",N,n,N%n); 
			break;
	}
	
	return 0;
}

