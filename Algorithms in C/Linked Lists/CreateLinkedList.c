#include<stdio.h>
#include<malloc.h>

typedef struct node{ 
    int num;
    struct node *next;
} NODE;

int main() {
    NODE *start , *p ,*q;
    int c;

    start = NULL;
    do {
        if(start == NULL){
            p = (NODE *) malloc(sizeof(NODE));
            scanf("%d", &p->num);
            printf("Working");
            p->next = NULL;
            start = p;
        } else {
            p = (NODE *)malloc(sizeof(NODE));
            scanf("%d", &p->num);
            p->next = NULL;
            q = start;
            while(q->next != NULL){
                q = q->next;
            }
            q->next = p;      
        }
        printf("press 1 to Continue  \n press any key to exit");
        scanf("%d",&c);
        
    }while(c == 1);

    return 0;
} 