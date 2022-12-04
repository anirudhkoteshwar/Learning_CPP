#include <iostream>
#include <string.h>
using namespace std;

template <typename T> T maximum(T a, T b);

int main(){
    //useful for setting up the same function for different datatypes.
    //you need to prototype templates    
    int a {10};
    int b {20};
    double c {22.3};
    double d {302.34};
    //we are using strings but we need to make sure the operations performed in the template are valid for strings
    string e {"Hello"};
    string f {"World"};
    cout << maximum(a,b) << endl;
    cout << maximum(c,d) << endl;
    cout << maximum(e,f) << endl;
}

// T is the placeholder for the type
template <typename T> T maximum(T a, T b){
    return (a>b) ? a:b;
}