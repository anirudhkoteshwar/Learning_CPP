#include <iostream>
using namespace std;

int main(){
    //how to set a lifetime for a variable - use curly braces for setting scope
    {int a = 10;}
    //cout << a <<endl; //a is not declared in this scope

    //you can also use heap memory to store data
    int *p {nullptr};
    p = new int; //dynamically allocate space for a single int on the heap. the system wont interfere with this memory.
    *p = 77;
    cout << *p << endl;
    //to release this memory,
    delete p;
    p = nullptr;
    //DO NOT CALL DELETE ON A POINTER TWICE.
}