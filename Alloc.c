#include<stdio.h>
#include<malloc.h>

int main() {
    int *p;
    p = (int)malloc(2 * sizeof(int));
    scanf("%d",p);
    printf("Scanned Value : %d \n",*p);
    free (p);
    return 0;
}