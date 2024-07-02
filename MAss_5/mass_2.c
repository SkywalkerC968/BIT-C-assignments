#include <stdio.h>  
#include <math.h>  
#include <stdlib.h>  
  
int main() {  
    int m = 0,M = 0,n = 0,a = 0,b = 0,c = 0,d =0;  
    while(1){  
        scanf("%d%d",&m,&M);  
        n = 0;  
        if(m == 0 && M == 0)break;  
        else if(m>=1000 && M>=1000){  
            for(m;m<=M;m++){  
                if(m%2 != 0)continue;  
                else{  
                    a = 0,b = 0,c = 0,d =0;  
                    d = m % 10;  
                    c = m / 10 % 10;  
                    b = m / 100 % 10;  
                    a = m / 1000 % 10;  
                    if(a != b && a != c && d != a && b != c && c != d && b != d){  
                        n++;  
                        printf("%d  ",m);  
                    }  
                }  
            }  
            printf("\n");  
            printf("counter=%d\n",n);  
        }  
        else {  
        printf("Error\n");  
        }  
    }  
    return 0;  
}  
