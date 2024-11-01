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
    void PrintMenu(int);

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
    cout << "1. Sort the text file.";
    cout << "2. Print the sorted list.";
    cout << "3. Add a name to the text file.";
    cout << "4. Remove a name from the text file.";
    cout << "5. ";
    cout << "6. ";
    cout << "7. ";
    cout << "8. ";
    cout << "9. ";
    cout << "10. End the Program ";
}


#endif