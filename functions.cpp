#include <iostream>
using namespace std;

/*
    returntype name (argument1,argument2,...){
        operations

        return returntype
    }
*/
void enter_bar(unsigned int );
int max(int,int);
void maniarg(int);
void incrint(int*);
void refint(int&);

int main(){
    enter_bar(22);
    enter_bar(12);
    cout << "enter two numbers" << endl;
    int a;
    int b;
    cin >> a;
    cin >> b;

    //pass by value
    //arguments passed will be converted to copies
    cout << "The larger number is " << max(a,b) << endl;
    cout << "Address of variable : " << &a << endl;
    maniarg(a);
    cout << "value of variable : " << a << endl;

    //to avoid this, we can pass arguments as pointers
    //pass by pointer
    cout << b << " " << &b << endl;
    incrint(&b);
    cout << b << " " << &b << endl;

    //pass by reference
    int& c = b;
    cout << c << " " << &c << endl;
    refint(c);
    cout << c << " " << &c << endl;

}

void enter_bar(unsigned int age){
    if (age>=18){
        cout << "You can enter the bar" << endl;
    }
    else {
        cout << "You're too young for this." << endl;
    }
}


int max(int a,int b){
    return a>b ? a : b;
}

void maniarg(int a){
    cout << "address of argument : " << &a << endl;
    cout << "Incrementing argument..." << endl;
    a++;
    cout << "value of argument : " << a << endl;
}

void incrint(int* a){
    cout << "value of a is " << *a  << " " << a << endl;
    ++(*a);
    cout << "value of a is " << *a << endl;
}

void refint(int& a){
    cout << "value of a is " << a  << " " << &a << endl;
    ++a;
    cout << "value of a is " << a << endl;
}