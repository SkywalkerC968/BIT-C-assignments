#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

void convert(char s[18],int a[18]){
	int i = 0;
	for(i = 0;i < 18;i++){
		if(s[i] == 'X'){
			a[i] = 10;
		}
		else a[i] = s[i]-'0';
	}
}

void concatenate(int a[18],int flag){
	int i = 0;
	if(flag == 1){
		for(i = 14;i >= 6;i--){
			a[i+2] = a[i];
		}
		a[6] = 1;
		a[7] = 8;
	}
	else{
		for(i = 14;i >= 6;i--){
			a[i+2] = a[i];
		}
		a[6] = 1;
		a[7] = 9;
	}
}

char check(int a[18]){
	int w[17] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2},sum = 0,i = 0,Y = 0;
	char check[11] = {'1','0','X','9','8','7','6','5','4','3','2'},V;

	for(i = 0;i < 17;i++){
		sum += a[i]*w[i];
	}
	Y = sum % 11;
	V = check[Y];
	
	return V;
}

int main() {
	char s[18];
	int n = 0,j = 0;
	scanf("%d",&n);
	for(j = 0;j < n;j++){
		int a[18] = {0},i = 0,sum = 0;
	 	scanf("%s",s);
	 	
	 	i = strlen(s);
		convert(s,a);
		
		if(i == 15){
			if((a[12] == 9)&&(a[13] == 9)&&(a[14] == 9)||(a[14] == 8)||(a[14] == 7)||(a[14] == 6)){
				concatenate(a,1);
				for(i = 0;i < 17;i++){
					if(a[i] == 10)printf("%c",'X');
					else printf("%d",a[i]);
				}
				printf("%c\n",check(a));
			}
			else{
				concatenate(a,0);
				for(i = 0;i < 17;i++){
					if(a[i] == 10)printf("%c",'X');
					else printf("%d",a[i]);
				}
				printf("%c\n",check(a));
			}
		}
		else if(i == 18){
			if(check(a) == s[17])printf("Valid\n");
			else printf("Invalid\n");
		}
		else printf("Invalid\n");
	}
	return 0;
}

