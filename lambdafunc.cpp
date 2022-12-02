#include <iostream>
using namespace std;

int main(){
    //lambda functions are anonymous functions (w/o names)
    //lambda function signature:
    /*
        [capture list] (parameters) -> return type {
            body
        }
    */
   auto func = [](){
    cout << "Hello world" << endl;
   };
   func();
}