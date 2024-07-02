#include <stdio.h>  
#include <stdlib.h>  

int resort(int *pa[],int num);  
  
int main(int argc, char *argv[]) {  
          
    int a[100];  
    int num;  
      
    int *pa[100];  
    scanf("%d",&num);  
      
    int i=0;  
    for(i=0;i<num;i++)  
     {  
       scanf("%d",&a[i]);  
       pa[i]=&a[i];           
     }  
  
    resort(pa,num);  
  
    for(i=0;i<num;i++)  
     {  
       printf("%d\n",*pa[i]);  
    }  
  
    return 0;  
}  

int resort(int*pa[],int num){
	int i = 0,j = 0;
	int* tmp;
	for(;i < num;i++){
		for(j = 0;j < num-i-1;j++){
			if(*pa[j] > *pa[j+1]){
				tmp = pa[j];
				pa[j] = pa[j+1];
				pa[j+1] = tmp;
			}
		}
	}
}
