#include <iostream>
using namespace std;

int main(){
    int n = 10;
    int x = -20; //ints are signed by default
    signed int y = -264;
    signed z = -2048;
    signed long a = -124124341123;
    cout << n << " " << x << " " << y << endl;
    cout << sizeof(n) << " " << sizeof(x) << " " << sizeof(y) << endl;
    cout << z << " " << sizeof(z) << endl;
    cout << a << " " << sizeof(z) << endl;
}