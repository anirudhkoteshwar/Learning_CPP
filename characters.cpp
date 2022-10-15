#include <iostream>
using namespace std;

int main(){
    char A = 66; //uses ascii
    char B = 65;
    cout << A << endl;
    cout << B << endl;
    cout << static_cast<int>(A) << endl;
    cout << static_cast<int>(B) << endl;
}
