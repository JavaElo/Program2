#ifndef linkedlist_H
#define linkedlist_H

#include<iostream>

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
    void deleteNode();
    void Get();
    void display() const;
    

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
void LinkedList<T>::display() const {
    if (head == NULL) {
        cout << "There are no nodes in the list." << endl;
    }
    else {
        ListNode* nodeC = head;
        while (nodeC != NULL) {
            cout << nodeC->value << " " << endl;
            nodeC = nodeC->next;
        }
        cout << endl;
    }
}

template <typename T>
LinkedList<T>::~LinkedList() {
    ListNode* nodeC = head;
    cout << "\n\nNow calling the destructor";
    while (nodeC != NULL) {
        ListNode* nodeT = nodeC;
        nodeC = nodeC->next;
        delete nodeT;
    }
}



#endif