#include <iostream>
using namespace std;

int main(){
    //pointer variables store memory addresses of the specified type
    int *p {}; //pointer which stores address of integer. CAN ONLY STORE ADDRESS OF INTEGER.
    int a {10};
    p = &a; //store address of integer a in pointer p
    cout << p <<endl; //address of p
    cout << *p << endl; //value stored at address p
}