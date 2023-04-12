#include<iostream>
using namespace std;

#include"linkedList.h"

linkedList::linkedList()
{
    HEAD=NULL;
    TAIL=NULL;
}
void linkedList::addToHead(int data)
{
    node *newNode;
    newNode->info=data;
    if(HEAD=NULL)
    {
        HEAD=newNode;
        TAIL=newNode;
        newNode->next=NULL;
    }
    else
    {
    newNode->next=HEAD;
    HEAD=newNode;
    }
}
void linkedList::addToTail(int data)
{
    node *newNode;
    newNode->info=data;
    if(HEAD=NULL)
    {
        HEAD=newNode;
        TAIL=newNode;
        newNode->next=NULL;
    }
    else
    {
        newNode->next=NULL;
        TAIL->next=newNode;
        TAIL=newNode;
    }
}
void linkedList::add(int data, node *pred)
{
    node *newNode;
    newNode->info=data;
    if(HEAD=NULL)
    {
        HEAD=newNode;
        TAIL=newNode;
        newNode->next=NULL;
    }
    else
    {
        newNode->next=pred->next;
        pred->next=newNode;
    }
}

void linkedList::print()
{
    node *a=HEAD;
    while(a!=NULL)
    {
        cout<<" "<<a->info<<" ";
        a=a->next;
    }
}