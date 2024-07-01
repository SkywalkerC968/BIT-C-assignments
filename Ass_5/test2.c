#include <stdio.h>  
#include <math.h>  
#include <stdlib.h>  
  
int k = 0;  
  
int divi(int n,int N){  
    int i;  
    if(n == N+1){  
        k++;  
    }  
    else if(n == 0){  
        return 0;  
    }  
    else{  
        for(i = 0; i < 9; i++){ //exclude the case when i is equal to n  
            if((divi(n-1,N)*10 + i)%(n*n) == 0){  
                return divi(n-1,N)*10 + i;  
            }  
        }  
    }  
    return -1; //return -1 when no number is found that meets the condition   
}  
  
int main() {  
    int N;  
    scanf("%d",&N);  
    int result = divi(0,N); //invoke the function and store the result in a variable  
    if(result == -1){ //if no number is found that meets the condition   
        printf("No number found\n"); //print a message indicating that no number was found   
    }else{ //if a number is found that meets the condition   
        printf("%d\n",k); //print the count of numbers that meet the condition   
    }   
    return 0;   
}

