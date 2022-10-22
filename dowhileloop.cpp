#include <iostream>
using namespace std;


//difference is body is executed first, then the condition is checked
int main(){
 size_t i {0};
 do{
    cout << "Hello " << i << endl;
    ++i;
 }while (i<=10);
}