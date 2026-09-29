#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Display(PNODE first)
{
    while(first)
    {
        printf("| %d | -> ",first->data);
        first = first->next;
    }
    printf("NULL\n");
}

int Count(PNODE first) 
{
    int iCount = 0;

    while(first)        // Type 1
    {
        iCount++;
        first = first->next;
    }
    return iCount;
}

void InsertFirst(PPNODE first , int iNo)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;

    if(NULL == *first)              // Linked list is empty
    {
        *first = newn;
    }
    else                            // Linked list contains atleast 1 node
    {
        newn->next = *first;
        *first = newn;
    }
}

void InsertLast(PPNODE first, int iNo)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;

    PNODE temp = NULL;

    if(*first == NULL)              // Linked list is empty
    {
        *first = newn;
    }

    else
    {
        temp = *first;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        
        temp->next = newn;
        
    }
}

void InsertAtPos(PPNODE first ,int iNo, int iPos)
{}

void DeleteFirst(PPNODE first)
{
    if(NULL == *first)              // Linked list is empty
    {
        return ; 
    }

    else if((*first)->next == NULL)     // LL conrains 1 node
    {
        free(*first);
        *first = NULL;
    }

    else
    {
        PNODE temp = *first;
        *first = (*first)->next;
        free(temp);
    }
}

void DeleteLast(PPNODE first)
{

    PNODE temp = *first;

    if(NULL == *first)              // Linked list is empty
    {
        return ; 
    }

    else if(NULL == temp->next )     // LL conrains 1 node
    {
        free (temp);
        temp = NULL;
    }
    else
    {
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }

        free(temp->next);
        temp->next = NULL;

    }
}

void DeleteAtPos(PPNODE first , int iPos)
{}



int main()
{
    int iRet = 0;
    PNODE head = NULL;

    InsertFirst(&head,101);
    InsertFirst(&head,51);
    InsertFirst(&head,21);
    InsertFirst(&head,11);

    Display(head);
    iRet = Count(head);
    printf("No of elements in Linked List is %d\n",iRet);

    InsertLast(&head,111);
    InsertLast(&head,121);

    Display(head);
    iRet = Count(head);
    printf("No of elements in Linked List is %d\n",iRet);

    DeleteFirst(&head);

    Display(head);
    iRet = Count(head);
    printf("No of elements in Linked List is %d\n",iRet);

    DeleteLast(&head);

    Display(head);
    iRet = Count(head);
    printf("No of elements in Linked List is %d\n",iRet);

    return 0;
}