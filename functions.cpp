#include <iostream>
using namespace std;

/*
    returntype name (argument1,argument2,...){
        operations

        return returntype
    }
*/
void enter_bar(unsigned int age);
int max(int a,int b);
void maniarg(int a);


int main(){
    enter_bar(22);
    enter_bar(12);
    cout << "enter two numbers" << endl;
    int a;
    int b;
    cin >> a;
    cin >> b;
    cout << "The larger number is " << max(a,b) << endl;
    cout << "Address of variable : " << &a << endl;
    maniarg(a);
    cout << "value of variable : " << a << endl;
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
    int greater = a>b ? a : b;
    return greater;
}

void maniarg(int a){
    cout << "address of argument : " << &a << endl;
    cout << "Incrementing argument..." << endl;
    a++;
    cout << "value of argument : " << a << endl;
}
