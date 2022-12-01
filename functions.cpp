#include <iostream>
using namespace std;

/*
    returntype name (argument1,argument2,...){
        operations

        return returntype
    }
*/

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

int main(){
    enter_bar(22);
    enter_bar(12);
    cout << "enter two numbers" << endl;
    int a;
    int b;
    cin >> a;
    cin >> b;
    cout << "The larger number is " << max(a,b) << endl;
}

