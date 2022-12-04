#include <iostream>
#include <string.h>
using namespace std;

template <typename T> T maximum(T a, T b);
template <typename T> const T& minimum( const T& a, const T& b);

//template specialization: set specific rules for certain datatypes
template <> const char* maximum<const char*> (const char*,const char*);

int main(){
    //useful for setting up the same function for different datatypes.
    //you need to prototype templates    
    int a {10};
    int b {20};
    double c {22.3};
    double d {302.34};
    //we are using strings but we need to make sure the operations performed in the template are valid for strings
    const char* e {"Hello"};
    const char* f {"World"};
    cout << maximum(a,b) << endl;
    cout << maximum(c,d) << endl;

    //use the specalized comparision
    cout << maximum(e,f) << endl;

    //you can explicitly say which type you want the template to use. if you enter convertible types, you also get convertible types
    cout << maximum<double>(a,d) << endl;
}

// T is the placeholder for the type
template <typename T> T maximum(T a, T b){
    return (a>b) ? a:b;
}

// work by reference (use the external variable not a copy but we cant modify it as we are using const)
template <typename T> const T& minimum( const T& a, const T& b){
    return (a>b) ? a:b;
}

//body of template specialization
template <> const char* maximum<const char*> (const char* a,const char* b){
    return (strcmp(a,b) > 0) ? a : b ;
}