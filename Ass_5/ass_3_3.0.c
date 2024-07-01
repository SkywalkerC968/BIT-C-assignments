//	对于输入数据的末尾的零没有容错能力。无法保证真正八位小数。
//	可以通过modi函数优雅完成去尾工作。

#include <stdio.h>
#include <math.h>
#include <stdlib.h> 

int min(int a,int b){
	a = a < b ? a : b;
}

//void函数用于存储输入的小数n，在函数内完成“去除小数点”和“去除末尾0”两个操作。 
void modi(char a[],char n[]){
	int tmp = 40,flag = 1,i = 0,l = 0;
	for(i = 0;i < 40;i++){
		if(i == 0){
			a[i] = n[i];
			if(a[i] == '0'){
				tmp = min(tmp,i);//tmp记录最早出现的0的位置 
				flag &= 0;
			}
		}
		else{
			a[i] = n[i+1];
			if(a[i] == '0'){
				tmp = min(tmp,i);
				flag &= 0;//正整数后第一次出现0则flag = 0，连续出现0亦有flag = 0
			}
			else if(a[i] == '\0'){
				l = i;
				break;
			}
			else{
				flag = 1;//一旦0后出现正整数则刷新tmp位置和flag状态
				tmp = 40;
			}
		}
	} 
	if(flag == 0){
		if(tmp == 0){// 此处的迷惑行为其实是为了0.0的正确精度输出，不必太过在意。 
			a[tmp] = '\0';
		}
		else{
			for(i = 0;i < tmp-1;i++){
			a[i] = a[i];
			}
			a[i+1] = '\0';
		}
	}
	
} 

int main() {
	char n[41] = {'0'},a[40] = {'0'},e;
	int k = 0,tmp = 0,flag = 0,i = 0;
	scanf("%s %c %d",n,&e,&k);

	modi(a,n);

	if(k > 38){//k太大而向右超出 
		for(i = 0;i < 40;i++){
			if(a[i] == '\0'){
				tmp = i;
				break;
			}
			else printf("%c",a[i]);
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
		printf("0.");//小数点向左移动，根据科学计数法，直接留下“0.”在前 
		for(i = 0;i < ((-k-1)<8 ? (-k-1) : 8);i++){//此处判断k值是否过小而导致输出过多的0
			printf("0");
		}
		for(i = 0;i < 9+k;i++){
			if(a[i] == '\0'){
				tmp = i;
				break;
			}
			else printf("%c",a[i]);
			
		}
		for(i = tmp;i < 9+k;i++){
			printf("0");
		}
		printf("\n");		
	}
	else{//此处分了两种情况分别考虑字符串a在小数点前耗尽和在小数点后耗尽的情况
		for(i = 0;i < 1+k;i++){
			if(a[i] == '\0'){
				tmp = i;
				for(i = tmp;i < 1+k;i++){
					printf("0");
				}
				break;
			}
			else printf("%c",a[i]); 
		}
		printf(".");
		for(i = 1+k;i < 9+k;i++){
			if(a[i] == '\0'){
				tmp = i;
				for(i = tmp;i < 9+k;i++){
					printf("0");
				}
				break;
			}
			else printf("%c",a[i]); 
		}
		printf("\n");
	}
	return 0;
}



