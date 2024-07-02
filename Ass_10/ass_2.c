#include <stdio.h>  
#include <stdlib.h>  
 
#define   ROW  3  
#define   COL  4  
  
int resort(int (*pa)[COL],int row,int col);  
  
int main(int argc, char *argv[]) {  
          
    int a[ROW][COL];  
      
    int (*pa)[COL];  
      
    int i=0,j=0;  
    for(i=0;i<ROW;i++)  
     {  
       for(j=0;j<COL;j++)      
       scanf("%d",&a[i][j]);  
     }  
    pa=a;  
   
    resort(a,ROW,COL);  
  
	for(i=0;i<ROW;i++)  
	{  
	   for(j=0;j<COL;j++)      
	          printf("%3d",a[i][j]);  
	   printf("\n");  
	}  
    return 0;  
} 

int resort(int (*pa)[COL],int row,int col){
	int i = 0,j = 0,k = 0;
	for(;i < row;i++,pa++){
		int tmp;
		for(j = 0;j < col;j++){
			for(k = 0;k < col-j-1;k++){
				if((*pa)[k] > (*pa)[k+1]){
					tmp = (*pa)[k];
					(*pa)[k] = (*pa)[k+1];
					(*pa)[k+1] = tmp;
				}
			}
		}
	}
}

