#include <iostream>
using namespace std;

int main(){
    // float 4 bits < double 8 bits < long double 12 bits
    // you can divide by zero here without the compiler throwing an error
    double a = 0.9;
    double b = 0.0;
    cout << a/b << endl;
    float c {0.123123412341234f};
    long double d {0.1324134124123412L};
    cout << c << " " << sizeof(c) << endl;
    cout << d << " " << sizeof(d) << endl;

}