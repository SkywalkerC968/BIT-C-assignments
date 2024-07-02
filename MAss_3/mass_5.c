#include <stdio.h>  
  
int main() {  
    int a = 0,b = 0,c = 0;  
    scanf("%d%d%d",&a,&b,&c);  
    if(a+b<=c || a+c<=b || b+c<=a)printf("%s","non-triangle.");  
    else {  
        if(a == b && b == c)printf("%s","equilateral triangle.");  
        else if((a==b&&b!=c) || (a==c&&b!=a) || (b==c&&c!=a))printf("%s","isoceles triangle.");  
        else printf("%s","triangle.");  
    }  
       
    return 0;  
} 
