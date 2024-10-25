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