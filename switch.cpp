#include <iostream>
using namespace std;

const int a = 10;
const int b = 20;
const int c = 30;
const int d = 10;
const int e = 15;
const int f = 5;

int main(){
  
    //cases must be constant values
    //break statement is necessary cuz when a successful case is hit, everything after that will also execute
    //condition must be of integral type
    switch(a){
        case b: {
            cout << "a = b" << endl;
        }break;

        case c: {
            cout << "a = c" << endl;
        }break;

        case d: {
            cout << "a = d" << endl;
        }break;

        case e: 
        case f:{
            cout << "a = e or f" << endl;
        }break;

        default:{
            cout << "none" << endl;
        }
    }

}