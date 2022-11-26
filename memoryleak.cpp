#include <iostream>
using namespace std;

int main(){
    int*a {new int{100}}; //'a' points to address 1 which has value 100
    int num = 2;
    a = &num; //'a' now points to address 2 which contains value 2.
    //this means the program loses access to that initial 100 and thus memory has leaked

    //double allocation also causes memory leaks
    int*b {new int{10}};
    b = new int{200};

    //local scope pointers also leak memory
    {int*c {new int{20}};}

    return 0;
}