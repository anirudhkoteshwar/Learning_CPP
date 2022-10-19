#include <iostream>
using namespace std;

int main(){
    
    //result = (condition) ? option1 : option2 ;
    
    //equivalent in if and else is
    /*
    if(condition){
        result = option1;
    }
    else{
        result = option2;
    }
    */
   //option 1 and 2 must be of same type or the types must be convertible

    int a = 5;
    int b = 6;
    int c = (a==b) ? 10 : 20;
    cout << c << endl;
}
