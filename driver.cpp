#include "linkedlist.h"
#include "helper.h"
#include "dataclass.h"

int main(){

    int choice; 

    LinkedList<string> list;
    do{
        void printMenu(int choice);

     //Use switch
        switch (choice)
        {
            case 1:
                {
                 void selectionSort();
                }

            case 2:
                {
                 void displayList();
                }

            case 3:
                {

                }

            case 4:
                {

                }

            case 5:
                {

                }

            case 6:
                {

                }

            case 7:
                {

                }

            case 8:
                {

                }

            case 9:
                {

            }

    } 

    if (choice > 10 || choice < 1)
    {
        cout << "Invalid choice. Please choose again.";
    }

    if (choice == 10)
    {

    }

    return 0;
} while(choice != 10);