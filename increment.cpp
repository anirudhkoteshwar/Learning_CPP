#include <iostream>
using namespace std;

int main(){
    int x = 5;
    cout << "Value of x++ : " << x++ << endl;
    cout << "Value of x now : " << x << endl;
    x = 5;
    cout << "x is reset to 5" << endl;
    cout << "Value of ++x : " << ++x << endl;
    cout << "Value of x now : " << x << endl;
    /*
    x++ prints first then increments
    ++x increments first then prints
    same thing applies to x-- and --x
    */


}
