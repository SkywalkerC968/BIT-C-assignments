#include <stdio.h>  
#include <stdlib.h>  
  
typedef struct sdata  
{  int num;  
   struct sdata *next;  
} SNODE;  
  
void movenode( SNODE *, int );  
  
void setlink( SNODE * head, int n )  
{     
    SNODE *p;  
  
    while ( n > 0 )  
    {   p = ( SNODE * ) malloc( sizeof( SNODE ) );  
        p->num = n;  
        p->next = head->next;  
        head->next = p;  
        n --;  
    }  
}  
  
void outlink( SNODE * head )  
{  
    while( head->next != NULL )  
    {  
        head = head->next;  
        printf( "%d,", head->num );  
    }  
    return;  
}  
  
int main( )  
{   int n, m;  
    SNODE * head = NULL;  
  
    scanf("%d%d", &n, &m );  
    head = ( SNODE * ) malloc( sizeof( SNODE ) );  
    head->num = -1;  
    head->next = NULL;  
    setlink( head, n );  
  
    movenode( head, m );
    outlink( head );  
    printf("\n");  
    return 0;  
} 

void movenode( SNODE *h, int m){
	int i = 0;
	SNODE* tmp,*p = h;
	tmp = (SNODE*)malloc(sizeof(SNODE));
	while(p->next != NULL && p->next->num != m)p = p->next;
	if(p->next != NULL && p->next->num == m){
		tmp = p->next;
		p->next = tmp->next;
		tmp->next = h->next;
		h->next = tmp;
	}
}
