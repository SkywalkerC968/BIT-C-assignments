#include "stdio.h"  
#include "stdlib.h"  
  
struct node  
{   int data;  
    struct node * next;  
} ;  
  
typedef struct node NODE;  
typedef struct node * PNODE;  
void outlist( PNODE );  
void sortlist( PNODE , int );  
  
int main ( )  
{   int num=1;  
    PNODE head;  
  
    head = (PNODE)malloc( sizeof(NODE) );  
    head->next = NULL;  
    head->data = -1;  
  
    while ( num!=0 )  
    {   scanf("%d", &num);  
        if ( num!=0 )  
            sortlist( head, num);  
    }  
    outlist( head );  
    return 0;  
}  
  
void outlist( PNODE head )  
{   PNODE p;  
    p = head->next;  
    while ( p != NULL )  
    {   printf("%d\n", p->data);  
        p = p->next;  
    }  
}  

void sortlist( PNODE h, int num ) 
{   PNODE p; 
    p = (PNODE)malloc( sizeof(NODE) ); 
    while(h->next != NULL && h->next->data < num)h = h->next;
	if(h->next == NULL || h->next->data > num){
		p->data = num; 
	    p->next = h->next; 
	    h->next = p; 
	}
} 
