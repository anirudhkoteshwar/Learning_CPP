#include <iostream>
using namespace std;

template <typename T> T maximum(T a, T b);

int main(){
    //useful for setting up the same function for different datatypes.
    //you need to prototype templates    
    int a {10};
    int b {20};
    double c {22.3};
    double d {302.34};
    cout << maximum(a,b) << endl;
    cout << maximum(c,d) << endl;
}

template <typename T> T maximum(T a, T b){
    return (a>b) ? a:b;
}