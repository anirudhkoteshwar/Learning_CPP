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
    cout << "strlen(msg2) : " << strlen(msg2) << endl; //strlen still works with decayed arrays
    cout << "sizeof(msg2) : " << sizeof(msg2) << endl; //prints size of the pointer variable

    //compare two strings (strcmp)
    //returns negative if lhs appears before rhs in lexicographical order
    //returns 0 if both lhs and rhs are equal
    //returns positive if lhs apears after rhs in lexicographical order

    const char* strdata1 {"Alabama"};
    const char* strdata2 {"Blabama"};
    cout << "comparing strdata1 with strdata2 : " << strcmp(strdata1,strdata2) << endl;

    const char* strdata3 {"ALABAMA"}; //capitals preferred before small letters
    const char* strdata4 {"alabama"};
    cout << "comparing strdata3 with strdata4 : " << strcmp(strdata3,strdata4) << endl;

    //strncmp takes number of characters to compare as an argument
    //str'n'cmp not strcmp
    const char* strdata5 {"aaabcdefg"};
    const char* strdata6 {"aaazzzxyw"};
    size_t n {3};
    cout << "comparing strdata5 with strdata6 : " << strncmp(strdata5,strdata6,n) << endl;


}