#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	char n[41] = {'0'},a[40] = {'0'},e;
	int k = 0,tmp = 0,flag = 0,i = 0;
	scanf("%s %c %d",n,&e,&k);
//	printf("%c",n[3]); 
//	printf("%c",e);
//	printf("%d",k); 
	for(i = 0;i < 40;i++){
		if(i == 0){
			a[i] = n[i];
		}
		else a[i] = n[i+1];
	} 
//	对于输入数据的末尾的零没有容错能力。无法保证真正八位小数。
//	可以通过cut函数优雅完成去尾工作。 
//	printf("%c\n",a[19]);
	if(k > 38){
		for(i = 0;i < 40;i++){
			printf("%c",a[i]);
			if(a[i] == '\0'){
				tmp = i;
			}
		}
		for(i = tmp+1;i < k+tmp-38;i++){
			printf("0");
		}
		printf(".");
		for(i = 0;i < 8;i++){
			printf("0");
		}
		printf("\n");
	}
	else if(k < 0){
		printf("0.");
		for(i = 0;i < -k-1;i++){
			printf("0");
		}
		for(i = 0;i < 9+k;i++){
			printf("%c",a[i]);
			if(a[i] == '\0'){
				tmp = i;
			}
		}
		for(i = tmp;i < 9+k;i++){
			printf("0");
		}
		printf("\n");		
	}
	else{
		for(i = 0;i < 1+k;i++){
			printf("%c",a[i]);
			if(a[i] == '\0'){
				tmp = i;
				for(i = tmp;i < 1+k;i++){
					printf("0");
				}
				break;
			}
		}
		printf(".");
		for(i = 1+k;i < 9+k;i++){
			printf("%c",a[i]);
			if(a[i] == '\0'){
				tmp = i;
				for(i = tmp;i < 9+k;i++){
					printf("0");
				}
				break;
			}
		}
		printf("\n");
	}
	return 0;
}
