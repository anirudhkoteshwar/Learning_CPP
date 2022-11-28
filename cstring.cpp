#include <iostream>
#include <cstring>
using namespace std;

int main(){
    const char msg1[] {"The sky is blue."};
    const char* msg2 {"The sky is blue."};
    cout << "message 1 : " << msg1 << endl;
    cout << "message 2 : " << msg2 << endl;
    cout << "strlen(msg1) : " << strlen(msg1) << endl; //ignores null character at the end
    cout << "sizeof(msg1) : " << sizeof(msg1) << endl; //includes null character at the end
}