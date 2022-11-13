#include <iostream>
using namespace std;

int main(){
    // arrays will have junk values after they are initialized.
    // C++ will allow moving out of the arrays bounds but this will break the program. So this must be avoided.

    int scores[10];

    for (int i = 0;i < 10; ++i) { //write data
        scores[i] = i*3;
    }
    for (int i = 0;i < 10; ++ i) { //read data
        cout << "score[" << i << "]" << "=" << scores[i] << endl;
    }

    //arrays can be initialize and values can be set on the same line
    // arrays can be initialized without being completely full. The other values are initialized to 0.
    double salary[10] {1.1,12.3,123.4,5.43,4.53,5454.235,53523.254,43.553,5353.53,4.53};
    double money[5] {1,23,4};
    int sizes[] {12,3,53,5353,13,5135,535};


    for (int i = 0;i < 10; ++ i) { //read data
        cout << "salary[" << i << "]" << "=" << salary[i] << endl; 
    }

    for (int i = 0;i < 5; ++ i) { //read data
        cout << "money[" << i << "]" << "=" << money[i] << endl; 
    }

    for (auto value: sizes){ 
        cout << "value:" << value << endl;
    }
       for (int value: sizes){
        cout << "value:" << value << endl;
    }
    //you can omit the size of the array while initializing it.
    //this last one might be the most useful.

    //use std::size() to get the size of an array
    cout << size(sizes) << endl;

    //character arrays are also an option
    char message[] {'a','b','c','d','e','f','g','\0'};
    for (auto character : message){
        cout << character;
    }   
    cout << endl;
}