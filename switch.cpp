#include <iostream>
using namespace std;

int main(){
    const int a = 10;
    const int b = 20;
    const int c = 30;
    const int d = 10;

    switch(a){
        case b: {
            cout << "a = b" << endl;
        }
        break;
        case c: {
            cout << "a = c" << endl;
        }
        break;
        case d: {
            cout << "a = d" << endl;
        }
        break;
        default:{
            cout << "none" << endl;
        }
    }

}