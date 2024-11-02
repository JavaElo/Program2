#include "linkedlist.h"

#include "data.h"

int main() {

    int choice;
    string name, data;
    LinkedList<string> list;

    //Add the Dahmer victims to the linked list
    cout << "Now adding the Dahmer victims to the list";
    list.appendNode("Steven Hicks");
    list.appendNode("Steven Tuomi");
    list.appendNode("Jamie Doxtator");
    list.appendNode("Richard Guerrero");
    list.appendNode("Anthony Sears");
    list.appendNode("Ricky Beeks");
    list.appendNode("Eddie Smith");
    list.appendNode("Ernest Miller");
    list.appendNode("David Thomas");
    list.appendNode("Curtis Straughter");
    list.appendNode("Errol Lindsey");
    list.appendNode("Anthony Hughes");
    list.appendNode("Konerak Sinthasomphone");
    list.appendNode("Matt Turner");
    list.appendNode("Jeremiah Weinberger");
    list.appendNode("Oliver Lacy");
    list.appendNode("Joseph Bradehoft");


    do {
        
        list.printMenu();
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            cout << "\n" << list.first(); //print first element
            break;
        }

        case 2:
        {
            list.displayList(); //Display the linked list
            break;
        }

        case 3:
        {
            cout << "What name do you want to add? ";
            cin >> name;
            list.appendNode(name); //append node written by user to the end
            break;
        }

        case 4:
        {
            list.deleteHead(); //delete the first element
            break;
        }

        case 5:
        {
            list.isEmpty(); //Check if the linked list has any nodes in it
            break;
        }

        case 6:
        {
            cout << "\n" << list.last(); //print the last element in the linked list
            break;
        }

        case 7:
        {
            cout << "Add name first: ";
            cin >> name;
            list.insertFirst(name); //insert name by user to the beggining of the linked list
            break;
        }

        case 8:
        {
            list.same(); //check is there is only one node in the linked list
            break;
        }

        case 9:
        {
            list.deleteTail(); //delete the last element in the list
            break;
        }

        }

        //user validation
        if (choice > 10 || choice < 1)
        {
            cout << "Invalid choice. Please choose again.";
        }



    } while (choice != 10);
    return 0;
}