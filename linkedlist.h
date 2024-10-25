#ifndef LINKEDLIST_H
#define LINKEDLIST_H

template<typename T>
class LinkedList{
    public:
    LinkedList(){
        head = NULL;
        tail = NULL;
    }
    ~LinkedList();
    void appendNode();
    void deleteNode();
    void GetFront();
    void GetBack();
    void GetFrom();
    void insertFront();
    void insertBack();
    //Friend sort fucntion


    private:
    LinkedList* head;
    LinkedList* tail;

    struct ListNode{
        T value;
        ListNode* next;
    }
};





#endif