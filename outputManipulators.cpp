#include <iostream>
#include <ios>
#include <iomanip>

using namespace std;

int main(){
    cout << "Hello World " << endl;
    //std::flush sends whatever is in the output buffer to the connected device
    cout << "Hel" << flush << "lo " << "world" << endl;

    //std::setw sets width of output
    //std::right sets the justification
    //std::internal puts - with left justification and the number with right for -3134 -->  -  3134
    cout << right;
    cout << setw(10) << "Firstname"  << setw(10) << "Lastname" << setw(7) << "Grades" << endl;
    cout << setw(10) << "John"  << setw(10) << "Doe" << setw(5) << "88" << endl;
    cout << setw(10) << "Augustus"  << setw(10) << "Gloop" << setw(5) << "73" << endl;
    cout << setw(10) << "Kiki"  << setw(10) << "Kaka" << setw(5) << "91" << endl;
    cout << setw(10) << "Capy"  << setw(10) << "Bara" << setw(5) << "93" << endl;
    cout << endl;
    cout << left;
    //std::setfill() used to replace spaces with some fill character
    cout << setfill('-');
    cout << setw(10) << "Firstname"  << setw(10) << "Lastname" << setw(7) << "Grades" << endl;
    cout << setw(10) << "John"  << setw(10) << "Doe" << setw(5) << "88" << endl;
    cout << setw(10) << "Augustus"  << setw(10) << "Gloop" << setw(5) << "73" << endl;
    cout << setw(10) << "Kiki"  << setw(10) << "Kaka" << setw(5) << "91" << endl;
    cout << setw(10) << "Capy"  << setw(10) << "Bara" << setw(5) << "93" << endl;
    cout << endl;
    //std::boolalpha shows boolean output 0,1 as false and true
    //std::noboolalpha resets this
    bool a = 1;
    bool b = 0;
    cout << boolalpha;
    cout << a << "   "  << b << endl;
    //std::showpos shows + for positive numbers
    //std::noshowpos resets this

    
}