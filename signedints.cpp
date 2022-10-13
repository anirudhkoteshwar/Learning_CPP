#include <iostream>
using namespace std;

int main(){
    int n = 10;
    int x = -20; //ints are signed by default
    signed int y = -264;
    cout << n << " " << x << " " << y << endl;
    cout << sizeof(n) << " " << sizeof(x) << " " << sizeof(y) << endl;
}