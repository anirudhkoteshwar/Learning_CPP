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

   //you can also call a lambda function without assigning it to a variable by using () after closing the body
   [](){
    cout << "This is a lambda function " << endl;
   }();

   //you put parameters in the first parentheses
   [](double a, double b){
    cout << "a+b = " << a+b << endl;
   }(12.1,34.5);

   //lambda functions can also return something
   auto result = [](double a,double b){
    return a*b;
   }(10.5,35.2);
   cout << "result : " << result << endl;

   //print result directly
   cout << [](int a, int b){ return a+b; }(22,34) << endl;
}