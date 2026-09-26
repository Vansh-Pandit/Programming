#include<stdio.h>
#include<stdlib.h>
#pragma pack(1)

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;

int main()
{
    struct node *newn = NULL;

    newn = (struct node*)malloc(sizeof(struct node));
    
    newn->data = 11;
    newn->next = NULL;

    printf("%d\n",newn->data);

    return 0;
}