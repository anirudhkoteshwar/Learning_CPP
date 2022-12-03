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

   //specify return type. It will be forced to return double.
   /* auto result1 = [](double a, double b)->double{
    return (a+b);
   }(12.3,45.4);
   cout << result1 << endl; */

   //capture lists: bring stuff outside the scope of the lambda function into the lambda function
   // captured elements are converted into copies and the copies are modified. 
   // further modifications made to the original variable do not affect the value captured by the lambda function
   // this can be avoided by capturing by reference
   int c = 30;
   auto func1 = [c](){
    cout << "Inner value : " << c << endl;
   };

   for (int i=0;i<3;++i){
    cout << "Outer value : " << c++ << endl; 
   }
   func1();
    
    //to capture everything by outside the lambda function by value, use = in the []
    int a = 1;
    int b = 2;
    auto func2 = [=](){
        cout << a << '\n' << b << '\n' << c << endl;
    };
    func2();

    //to capture everything outside the lambda function by reference, use & in []
    //this means modifications made to the varaibles later on are also captured by the lambda function
    int d = 42;
    int e = 69;

    auto func3 = [&](){
        cout << d << '\n' << e <<  endl;
    };
    for (int i{};i<5;++i){
        cout << " Outer values : " << d << " " << e << endl;
        func3();
        ++d;
        e+=3;
    }

}