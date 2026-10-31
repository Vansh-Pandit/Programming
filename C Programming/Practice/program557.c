#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void inorder(PNODE first)
{
    if(first != NULL)
    {
        inorder(first->lchild);
        printf("%d\n",first->data);
        inorder(first->rchild);
    }
}

void preorder(PNODE first)
{
    if(first != NULL)
    {
        printf("%d\n",first->data);
        inorder(first->lchild);
        inorder(first->rchild);
    }
}

void Insert(PPNODE first, int iNo)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->lchild = NULL;
    newn->rchild = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        temp = *first;
        while(1)
        {
            if(iNo > temp->data)
            {
                if(temp->rchild == NULL)
                {
                    temp->rchild = newn;
                    break;
                }
                               
                temp = temp->rchild;
                
            }
            else if(iNo < temp->data)
            {
                if(temp->lchild == NULL)
                {
                    temp->lchild = newn;
                    break;
                }

                temp = temp->lchild;
            }
            else if(iNo == temp->data)
            {
                printf("unable to insert new node as element is duplicate\n");
                free(newn);
                break;
            }
        }

    }
}

int main()
{
    PNODE head = NULL;

    Insert(&head,11);
    Insert(&head,5);
    Insert(&head,17);

    printf("Inorder display\n");
    inorder(head);

    printf("Preorder display\n");
    preorder(head);

    return 0;
}