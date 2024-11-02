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
    void PrintMenu(int);
    void selectionSort();

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
void LinkedList<T>::deleteNode() {
    if (head == NULL) {
        return;
    }
    
    if (position == 0) {
        ListNode* node = head;
        head = head->next;
        delete node;
        return;
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


void printMenu(int choice)
{
    cout << "Welcome to the Dahmer program. What would you like to do?";
    cout << "1. Sort ascending the list.";
    cout << "2. Sort descending the list.";
    cout << "3. Display.";
    cout << "4. Add a name to the text file.";
    cout << "5. Remove a name from the text file.";
    cout << "6. Delete head of the linked list";
    cout << "7. Delete the tail of the linked list";
    cout << "8. Check to see if list is empty.";
    cout << "9. ";
    cout << "10. End the Program ";
    cin >> choice;
}

//IsEmpty();


#endif