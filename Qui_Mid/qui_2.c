#include <stdio.h>  
#include <math.h>  
#include <string.h>  
#include <stdlib.h>  
  
int read(char a[],char b[]){  
    int i = 0,j = 0;  
    char ge = '\0',tc = '\0';  
    for(;ge != '\n';a[i] = (ge == '\n')?('\0'):(ge),i++){  
          
        ge = getchar();  
    }  
    for(;tc != '\n';b[j] = (tc == '\n')?('\0'):(tc),j++){  
          
        tc = getchar();  
    }  
}  
  
int main(){  
    int i = 0,j = 0;  
    char a[106] = {'\0'},b[106] = {'\0'};  
    read(a,b);  
//  printf("%d\n",a[8] == '\0');  
      
    while(a[i] != '\0' || b[j] != '\0'){  
        if(a[i] == '\0'){  
            printf("%c",b[j]);  
            j++;  
        }  
        else if(b[j] == '\0'){  
            printf("%c",a[i]);  
            i++;  
        }  
        else{  
            if(a[i] == b[j]){  
                printf("%c%c",a[i],b[j]);  
                i++;  
                j++;  
            }  
            else if(a[i] < b[j]){  
                printf("%c",a[i]);  
                i++;  
            }  
            else{  
                printf("%c",b[j]);  
                j++;  
            }  
        }  
          
    }  
    printf("\n");  
      
    return 0;  
}  


