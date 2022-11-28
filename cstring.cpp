#include <iostream>
#include <cstring>
using namespace std;

int main(){
    const char msg1[] {"The sky is blue."};
    const char* msg2 {"The sky is red."};
    cout << "message 1 : " << msg1 << endl;
    cout << "message 2 : " << msg2 << endl;
}