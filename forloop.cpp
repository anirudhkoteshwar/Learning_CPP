#include <iostream>
using namespace std;

int main(){
    /*
    for loops have these components
        -iterator
        -starting point
        -test
        -increment/decrement
        -body
    */
   for (size_t i{1}; i < 11;++i){
    cout << "Hello " << i << endl;
   }
   cout << "Size of size_t is : "<<sizeof(size_t) << " Bytes" << endl;
    //we can use size_t as an alias for unsigned int, and it is used commonly for iterators
    //size_t i; and size_t i{}; are not the same. the second one sets i to 0
}
