#include <iostream>
using namespace std;

int main(){
    // float 4 bits < double 8 bits < long double 12 bits
    // you can divide by zero here without the compiler throwing an error
    double a = 0.9;
    double b = 0.0;
    cout << a/b << endl;

}