#include <iostream>
using namespace std;

int main(){
    // integers take 4 bytes
    //
    int n1 = 15; //decimal
    int n2 = 017; //octal
    int n3 = 0xEF14; //hexadecimal
    int n4 = 0b1101101; //binary
    int n5(5);
    //int n6 {2.5};
    int n7 = 2.8 ; // int x = d2.4 works but int x (6.2342) and int x {214.12} dont. the former loses data while the latter two throw errors.
    cout << n1 << endl;
    cout << n2 << endl;
    cout << n5 << endl;
    cout << n1 << endl;
    cout << n7 << endl;
}