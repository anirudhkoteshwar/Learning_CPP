#include <iostream>
using namespace std;

int main(){
    // arrays will have junk values after they are initialized.
    // C++ will allow moving out of the arrays bounds but this will break the program. So this must be avoided.

    int scores[10];

    for (int i = 0;i < 10; ++i) { //write data
        scores[i] = i*3;
    }
    for (int i = 0;i < 10; ++ i) { //read data
        cout << "score[" << i << "]" << "=" << scores[i] << endl;
    }
}