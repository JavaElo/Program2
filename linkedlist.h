#ifndef linkedlist_H
#define linkedlist_H

#include<iostream>
#include<string>

using namespace std;

template <typename T>
class LinkedList
{
private:
    struct ListNode
    {
        T value;
        ListNode* next;
    };

    ListNode* head;
    ListNode* tail;

public:
    LinkedList()
    {
        head = NULL;
        tail = NULL;
    }
    ~LinkedList();
    void appendNode();
    void deleteNode();
    void Get();
    
    private:
    LinkedList* head;
    LinkedList* tail;

    struct ListNode{
        T value;
        ListNode* next;
    }
};





#endif