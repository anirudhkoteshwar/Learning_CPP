#include <iostream>
using namespace std;
 int main(){
    auto n1 {12};
    auto n2 {12.43};
    auto n3 {'e'};
    auto n4 {true};

    cout << n1 << endl;
    cout << n2 << endl;
    cout << n3 << endl;
    cout << n4 << endl;
    cout << typeid(n1).name() << endl; //print type of the variable
    cout << typeid(n2).name() << endl;
    cout << typeid(n3).name() << endl;
    cout << typeid(n4).name() << endl;
 }