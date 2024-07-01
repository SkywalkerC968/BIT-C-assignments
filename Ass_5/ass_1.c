#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int a[10] = {0,1,2,3,4,5,6,7,8,9};
	int h = 0,n = 0,i = 0,j = 0;
	scanf("%d%d",&h,&n);
	if(h == 1)printf("%d\n",a[n]);
	else{
		if(h%2){
			for(j = n;j < (3*h-1)/2+n;j++){
				printf("%-2d",a[j%10]);
			}
			for(j = (3*h-1)/2+n-2;j > n;j--){
				printf("%-2d",a[j%10]);
			}
			printf("%d\n",a[(j)%10]);
		}
		else{
			for(j = n;j < 3*h/2+n-1;j++){
				printf("%-2d",a[j%10]);
			}
			for(j = 3*h/2+n-2;j > n;j--){
				printf("%-2d",a[j%10]);
			}
			printf("%d\n",a[(j)%10]);
		}
	
		for(i = 1;i < h-1;i++){
			for(j = 0;j < i;j++){
				printf("  ");
			}
			printf("%-2d",a[(n+i)%10]);
			for(j = 0;j < 3*h-4-2*i;j++){
				printf("  ");
			}
			printf("%d\n",a[(n+i)%10]);
		}
	
		for(i = 1;i < h;i++){
			printf("  ");
		}
		if(h%2){
			for(j = n+h-1;j < (h+1)/2+n+h-1;j++){
				printf("%-2d",a[j%10]);
			}
			for(j = (h+1)/2+n+h-3;j > n+h-1;j--){
				printf("%-2d",a[j%10]);
			}
			printf("%d\n",a[(j)%10]);
		}
		else{
			for(j = n+h-1;j < h/2+n+h-1;j++){
				printf("%-2d",a[j%10]);
			}
			for(j = h/2+n+h-2;j > n+h-1;j--){
				printf("%-2d",a[j%10]);
			}
			printf("%d\n",a[(j)%10]);
		}
	}
	
	return 0;
}

