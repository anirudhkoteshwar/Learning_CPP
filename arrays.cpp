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

    //arrays can be initialize and values can be set on the same line
    double salary[10] {1.1,12.3,123.4,5.43,4.53,5454.235,53523.254,43.553,5353.53,4.53};

    for (int i = 0;i < 10; ++ i) { //read data
        cout << "salary[" << i << "]" << "=" << salary[i] << endl;
    }
}