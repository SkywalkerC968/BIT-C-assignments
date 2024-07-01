#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

void clear(char* a,int len){
	int i = 0;
	for(;i < len;i++){
		a[i] = '\0';
	}
}

int power(int i,int j){
	int k = 0,p = 1;
	for(k = 1;k <= j;k++){
		p *= i;
	}
	return p;
}

int convert(int n){
	int i = 0,tmp = n,c = 0,a[41] = {0};
	while(tmp){
		a[i] = tmp % 10;
		tmp /= 10;
		i++;
	}
	for(tmp = 0;tmp < i;tmp++){
		c += a[tmp] * power(10,tmp);
	}
	
	return c;
}

int compress(){
	int i = 0,j = 0,k = 0,flag = 1,tmp = 0;
	char ch = getchar(),lst[3322][41] = {'\0'};
	
	while(ch != EOF){
		for(;'A'<=ch && ch<='Z' || 'a'<=ch && ch<='z';ch = getchar()){
			lst[i][j] = ch;
			j++;
			flag = 1;
		}
		for(;ch != EOF && 'A'>ch || ch>'Z' && 'a'>ch || ch>'z';ch = getchar()){
			if(flag){
				for(;tmp < i;tmp++){
					if(strcmp(lst[tmp],lst[i]) == 0){
						clear(lst[i],j);
						printf("%d",convert(tmp+1));
						i--;						
						tmp = 0;						
						break; 
					}
				}
				if(tmp == i){
					k = 0;
					while(lst[i][k] != '\0'){
						putchar(lst[i][k]);
						k++;
					}
				}
				tmp = 0;
				j = 0;
				flag = 0;
				i++;
			}
			putchar(ch);	
		}
	}

}

int main() {
	
	compress();
	
	return 0;
}

