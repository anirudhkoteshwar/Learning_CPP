#include <iostream>
#include <ios>
#include <iomanip>

using namespace std;

int main(){
    cout << "Hello World " << endl;
    //std::flush sends whatever is in the output buffer to the connected device
    cout << "Hel" << flush << "lo " << "world" << endl;

    //std::setw sets width of output
    cout << setw(10) << "Firstname"  << setw(10) << "Lastname" << setw(7) << "Grades" << endl;
    cout << setw(10) << "John"  << setw(10) << "Doe" << setw(5) << "88" << endl;
    cout << setw(10) << "Augustus"  << setw(10) << "Gloop" << setw(5) << "73" << endl;
    cout << setw(10) << "Kiki"  << setw(10) << "Kaka" << setw(5) << "91" << endl;
    cout << setw(10) << "Capy"  << setw(10) << "Bara" << setw(5) << "93" << endl;
    
}