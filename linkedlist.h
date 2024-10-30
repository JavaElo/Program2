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
    void appendNode(T value);
    void deleteNode(int position);
};


template <typename T>
void LinkedList<T>::appendNode(T value) {
    ListNode* node = new ListNode;
    node->value = value;
    node->next = NULL;
    if (head == NULL) {
        head = node;
        tail = node;
    }
    else {
        tail->next = node;
        tail = node;
    }
}


template <typename T>
LinkedList<T>::~LinkedList() {
    ListNode* nodeC = head;
    while (nodeC != NULL) {
        ListNode* nodeT = nodeC;
        cout << "*****DELETING the node with address: " << nodeT << endl << endl;
        nodeC = nodeC->next;
        delete nodeT;
    }
}



/*
    void GetFront();
    void GetBack();
    void GetFrom();
    void insertFront();
    void insertBack();
    //Friend sort fucntion
    //Sort function for descending
*/

#endif