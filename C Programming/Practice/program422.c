#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Display(PNODE first , PNODE last)
{
    if(first == NULL && last == NULL)
    {
        return;
    }
    do
    {
        printf("| %d | -> ",(first)->data);
        (first) = (first)->next;
    } while (first != last->next);

    printf("\n");
    
}

int count(PNODE first , PNODE last)
{
    int iCount = 0;

    if(first == NULL && last == NULL)
    {
        return 0;
    }
    do
    {
        iCount++;
        (first) = (first)->next;
    } while (first != last->next);

    printf("\n");

    return iCount;
}

void InsertFirst(PPNODE first, PPNODE last, int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;

    if(*first == NULL && *last == NULL)
    {
        *first = newn;
        *last = newn;
    }
    else
    {
        newn->next = (*first);
        *first = newn;
    }
    (*last)->next = *first;

}

void InsertLast(PPNODE first, PPNODE last, int iNo)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;

    if(*first == NULL && *last == NULL)
    {
        *first = newn;
        *last = newn;
    }
    else
    {
        (*last)->next = newn;
        *last = newn;
    }
    (*last)->next = *first;
}

void InsertAtPos(PPNODE first, PPNODE last, int iNo, int iPos)
{}

void DeleteFirst(PPNODE first, PPNODE last)
{}

void DeleteLast(PPNODE first, PPNODE last)
{}

void DeleteAtPos(PPNODE first, PPNODE last, int iPos)
{}

int main()
{
    PNODE head = NULL;
    PNODE tail = NULL;
    int iRet = 0;

    InsertFirst(&head,&tail,51);
    InsertFirst(&head,&tail,21);
    InsertFirst(&head,&tail,11);

    InsertLast(&head,&tail,101);
    InsertLast(&head,&tail,111);
    InsertLast(&head,&tail,121);

    Display(head,tail);
    iRet = count(head,tail);
    printf("Number of nodes are %d\n",iRet);

    return 0;
}