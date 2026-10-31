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
        preorder(first->lchild);
        preorder(first->rchild);
    }
}

void postorder(PNODE first)
{
    if(first != NULL)
    {
        postorder(first->lchild);
        postorder(first->rchild);
        printf("%d\n",first->data);
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

int Count(PNODE first)
{
    static int iCount = 0;

    if(first != NULL)
    {
        iCount++;
        Count(first->lchild);
        Count(first->rchild);
    }
    return iCount;
}
bool search(PNODE first, int iNo)
{
    bool bFlag = false;

    while(first != NULL)
    {
        if(iNo == first->data)
        {
            bFlag = true;
            break;
        }

        else if(iNo > first->data)
        {
            first = first->rchild;
        }

        else if(iNo < first->data)
        {
            first = first->lchild;
        }
    }
    return bFlag;
}
int main()
{
    int iRet = 0;
    bool bRet = 0;
    PNODE head = NULL;

    Insert(&head,11);
    Insert(&head,5);
    Insert(&head,17);
    Insert(&head,21);
    Insert(&head,4);
    Insert(&head,7);
    Insert(&head,15);
    
    printf("Inorder display\n");
    inorder(head);

    iRet = Count(head);
    printf("Number of nodes are : %d\n",iRet);

    if(search(head,25)== true)
    {
        printf("25 is present \n");
    }
    else
    {
        printf("25 is not present\n");
    }

    return 0;
}