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
    void deleteHead();
    void displayList() const;
    void printMenu();
    bool isEmpty() const;
    auto first();
    auto last();
    void insertFirst(T value);
    void same();
    void deleteTail();
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
void LinkedList<T>::deleteHead() {
    if (head == NULL) {
        return;
    }

    ListNode* node = head;
    head = head->next;
    delete node;
}




template <typename T>
void LinkedList<T>::displayList() const {
    if (head == NULL) {
        cout << "There are no nodes in the list." << endl;
    }
    else {
        ListNode* nodeC = head;
        while (nodeC != NULL) {
            cout << "\n" << nodeC->value << " " << endl;
            nodeC = nodeC->next;
        }
        cout << endl;
    }
}



template <typename T>
LinkedList<T>::~LinkedList() {
    ListNode* nodeC = head;
    cout << "\n\nNow calling the destructor \n";
    while (nodeC != NULL) {
        ListNode* nodeT = nodeC;
        nodeC = nodeC->next;
        delete nodeT;
    }
}


template <typename T>
bool LinkedList<T>::isEmpty() const {
    if (head == NULL) {
        cout << "List is empty";
    }
    return head == NULL;
}


template <typename T>
auto LinkedList<T>::first() {
    return head->value;
}


template<typename T>
auto LinkedList<T>::last() {
    return tail->value;
}


template<typename T>
void LinkedList<T>::insertFirst(T value) {
    ListNode* node = new ListNode;
    node->value = value;
    node->next = head;
    head = node;
}


template<typename T>
void LinkedList<T>::deleteTail() {
    if (head == NULL) {
        return;
    }
    ListNode* nodeC = head;
    while (nodeC->next != tail) {
        nodeC = nodeC->next;
    }
    nodeC->next = NULL;
    delete tail;
    tail = nodeC;

}


template<typename T>
void LinkedList<T>::same() {
    if (head == tail) {
        cout << "There is only one node in the list";
    }
    else {
        cout << "There is more than one node in the list";
    }
}

//Menu prompted to the user at the start
template<typename T>
void LinkedList<T>::printMenu()
{
    cout << "\n\nWelcome to the Dahmer program. What would you like to do?\n\n";
    cout << "1. Print first node \n";
    cout << "2. Display.\n";
    cout << "3. Add a name to the list.\n";
    cout << "4. Delete head of the list\n";
    cout << "5. Check to see if list is empty.\n";
    cout << "6. Print the last item in the list\n";
    cout << "7. Insert name to the beggining of the list\n";
    cout << "8. Check to see if there is only one node in the list\n";
    cout << "9. Delete the last node in the list\n";
    cout << "10. End the Program \n";
}


#endif