#include <iostream>
using namespace std;

int main(){
    //how to set a lifetime for a variable - use curly braces for setting scope
    {int a = 10;}
    //cout << a <<endl; //a is not declared in this scope

    //DO NOT INITIALIZE POINTER WITH NULL VALUE
    //int *a {}; DO NOT DO THIS

    //you can also use heap memory to store data
    int *p {nullptr};
    p = new int; //dynamically allocate space for a single int on the heap. the system wont interfere with this memory.
    *p = 77;
    cout << *p << endl;
    //to release this memory back to the OS,
    delete p;
    p = nullptr;
    //DO NOT CALL DELETE ON A POINTER TWICE.

    //this pointer still exists
    p = new int(81);
    cout << *p << endl;
    delete p;
    p = nullptr;

    //dangling pointers
    //case 1: uninitialized pointer
    /*
    int *a;
    and the a = &b statement is missing.
    */

    //case 2: deleted pointer
    /*
    int *a {new int{66}};
    delete a;
    cout << a << endl; //do not do this
    */

    //case 3: multiple pointers pointing at same data
    /*
    int *a {new int{12}};
    int *b {a};
    delete a;
    cout << *b << endl;
    */

   //new fails when the heap is full
}