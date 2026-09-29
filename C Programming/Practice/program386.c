#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
    struct node *prev;              // $
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

int Count(PNODE first)
{
    return 0;
}

void Display(PNODE first)
{

}

void InsertFirst(PPNODE first, int iNo)
{

}

void InsertLast(PPNODE first, int iNo)
{

}

void InsertAtPos(PPNODE first, int iNo, int iPos)
{

}

void DeleteFirst(PPNODE first)
{

}

void DeleteLast(PPNODE first)
{

}

void DeleteAtPos(PPNODE first, int iPos)
{

}

int main()
{
    PNODE head = NULL;


    return 0;
}