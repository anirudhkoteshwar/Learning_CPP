#include <iostream>
using namespace std;

int main(){
    //stuff you do to make sure pointers contain valid addresses

    //verbose nullpointer check
    int *p_number {}; //initialized to nullpointer
    
    if (p_number){
        cout << " valid address : " << p_number << endl;
    }
    else {
        cout << "invalid address" << endl;
    }
    //calling delete on a nullpointer is ok
    int *nullpointer {};
    delete nullpointer;

}