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
    friend void quickSortMid();
    friend void selectionSort();
    friend void MergeSort(); 


    struct ListNode{
        T value;
        ListNode* next;
    }
};

void quickSortMid( int low, int high)
{
    int pivotLocation = 0;
    if( low >= high)
    {
        return;
    }

    pivotLocation = partition(low, high);
    quickSortMid(low, pivotLocation);
    quickSortMid( pivotLocation + 1, high);
}

int partition(int left, int right)
{
    int pivot, middle, temp;
    bool done = false;

    middle = left + (right-left) / 2;
    int l = left;
    int r = right;

}

void selectionSort()
{
    int minIndex, minValue;
    int temp;

    for(int start = 0; start < (size -1 ); start++)
    {
        minIndex = start;
        minValue = x;

        for(int i = start + 1; i < size; i++)
    }
}

#endif