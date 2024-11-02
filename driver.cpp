#include "linkedlist.h"
#include "helper.h"
#include "dataclass.h"

int main(){

    int choice; 

    LinkedList<string> list;
    do{
        void printMenu(int choice);
        cin >> choice;

     //Use switch
        switch (choice)
        {
            case 1://asceding sort of the list
                { 
                    list.ascendingSort();
                    cout << "List sorted in ascending order";
                    break;
                }

            case 2: //descending sort of the list
                {
                    list.descendingSort();
                    cout << "List sorted in descending order";
                    break;
                }

            case 3: //displaying the list
                {
                    list.display();
                    break;
                }

            case 4: //add a name to the text file
                {

                }

            case 5: //remove a name from the text file
                {
                    list.deleteNode();
                    break;
                }

            case 6: //delete the head of the linked list
                {
                    list.deleteHead();
                }

            case 7: //delete the tail of the linked list
                {
                    list.deleteTail();
                }

            case 8: //check to see if the list is empty
                {
                    if(list.isEmpty())
                    {
                        cout << "List is empty.";
                    }
                    else
                    {
                        cout << "List is not empty.";
                    }
                    break;
                }

            case 9:
                {

                } 
            case 10: //ends the program
                {
                    cout << "End of Program.";
                    cout << "Thank you for using our program.";
                    break;
                }

    } 

    if (choice > 10 || choice < 1) //checks to see if the choice is valid.
    {
        cout << "Invalid choice. Please choose again.";
    }

    

    
} while(choice != 10);

    return 0;
}