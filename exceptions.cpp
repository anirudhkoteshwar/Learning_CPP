#include <iostream>
using namespace std;

int main(){
    for (size_t i{}; i < 100000000000; ++i){
        try{
            int *p {new int[100000000]};
        }
        catch(exception& ex){
            cout << "Exception caught is : " << ex.what() << endl;
        }
    }

    return 0;
}
