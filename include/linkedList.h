#include<iostream>

#ifndef linkedList_h
#define linkedList_h

class node
{
    public:
    int info;
    node *next;
    node(){}
    node(int d):info(d),next(NULL){}
    node(int d,node *next):info(d),next(next){}
};
class linkedList
{
    node *HEAD;
    node *TAIL;        
    public:
    linkedList();
    void add(int data, node *pred);
    void addToHead(int data);
    void addToTail(int data);
    void print();
    //void removeTail();
    //void removeHead();
    //void removeNode(int data);
};

#endif