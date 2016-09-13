#include<stdio.h>
#include<malloc.h>

typedef struct node {
    
    int num;
    struct node *next;
}NODE;

NODE *start , *q , *p  ;

void createNode() {
    if(start == NULL) {
            p = (NODE *) malloc(sizeof(NODE));
            scanf("%d",&p->num);
            p->next = NULL;
            start = p ;
        } else {
            p = (NODE *) malloc(sizeof(NODE));
            scanf("%d",&p->num);
            p->next = NULL;
            q = start;
            while(q->next != NULL) {
                q = q->next;
            }
            q->next = p;
        }
}


void DeleteNode(int s) {
            int i;
            q = start;
    for(i = 1 ; i < s - 1 ; i++){
        q = q->next ;
    }
    p = q->next;
    q->next = p->next;
    free(p);
}


int main() {
    int c, position, num;
    
    start = NULL;
    do{ 
            createNode();        
            printf("Press 1 To Continue \n \n Press Any Key To Exit \n \n ");
            scanf("%d",&c);
        
    }while(c==1);
    printf("Elements of Linked List Before Insertion\n \n");
    for(q = start ; q != NULL ; q = q->next) {
        printf("%d \n",q->num);
    }
    position = 3;
    DeletionNode(position);    
    printf("Elements of Linked List After Insertion\n \n");
    for(q = start ; q != NULL ; q = q->next) {
        printf("%d \n",q->num);
    }
    
    return 0;
}