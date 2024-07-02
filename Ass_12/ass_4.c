#include <stdio.h>  
#include <stdlib.h>  
typedef struct numLink  
{  
    int no;  
    struct numLink *next;  
}NODE;  
  
NODE *monenode( NODE *head, int m );  
  
void SetLink( NODE *h, int n )  
{  
    NODE *p=NULL, *q=NULL;  
    int i;  
    for( i=0; i<n; i++)  
    {  
        p = (NODE *)malloc(sizeof(NODE));  
        p->no = i+1;  
        p->next = NULL;  
        if( h->next == NULL )  
        {  
            h->next = p;  
            q = p;  
        }  
        else  
        {  
            q->next = p;//That's the normal way to set a link in order
            q = q->next;//Two parameters are needed  
        }  
    }  
    return;  
}  
  
int main( )  
{  
    int n,m;  
    NODE *head=NULL, *q=NULL;  
    scanf("%d%d",&n,&m);  
    head = (NODE *)malloc(sizeof(NODE));  
    head->no = -1;  
    head->next = NULL;  
  
    SetLink( head, n );  
  
    q = monenode( head, m );  
  
    do  
    {  
        printf("%d ",q->next->no);  
        q = q->next;  
    }while( q->next != NULL );   
    printf("\n");  
    return 0;  
}  

NODE *monenode( NODE *head, int m ){
	int i = 0;
	NODE* spt = NULL,*tmp = NULL,*end = NULL;
	spt = (NODE*)malloc(sizeof(NODE));
	tmp = (NODE*)malloc(sizeof(NODE));
	end = (NODE*)malloc(sizeof(NODE));
	spt = head;
	end = head;
	for(;spt->next != NULL && i < m;i++){
		spt = spt->next;
	}
	while(end->next != NULL)end = end->next;
	if(spt->next == NULL)return head;//if m exceed the limit, return the whole link
	else{
		tmp = spt->next;
		spt->next = NULL;
		end->next = head->next;
		head->next = tmp;
		return head;
	}
} 
