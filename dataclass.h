#ifndef data_H
#define data_H

#include <iostream>
#include <string>
#include <fstream>

using namespace std;
//get from file, set name and age
template <typename T>
class ListL {
private:
    string name;
    int age;

public:
    void readFile();

};

template<typename T>
void ListL<T>::readFile() {
    fstream myfile("Dahmer.txt"); //Open text file

    if (!nyfile.is_open()) {
        cerr << "Error opening file!" << endl;
    }

    int age[17];
    string name[17], last[17];

    // Read data from the file and assign
    for (int i = 0; i < 17; i++) {
        myfile >> name[i] >> last[i] >> age[i];
    }

    myfile.close();

}

#endif