#include <stdio.h>  
#include <math.h>  
#include <string.h>  
#include <stdlib.h>  
  
int main(){  
    int m = 0,n = 0,i = 0,j = 0;  
    scanf("%d,%d",&m,&n);  
    for(i = 0;i*i < m;i++);  
    for(j = i;j*j <= n;j++);  
    printf("%d\n",j-i);  
    
    return 0;
}  

