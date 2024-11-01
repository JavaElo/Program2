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
    void PrintMenu(int);
    void quickSort();

    private:
    LinkedList* head;
    LinkedList* tail;

    struct ListNode{
        T value;
        ListNode* next;
    }
};


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
    cout << "8. ";
    cout << "9. ";
    cout << "10. End the Program ";
    cin >> choice;
}

void quickSort()
{

}


#endif