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
    cout << endl;
    //std::showpos shows + for positive numbers
    //std::noshowpos resets this
    cout << showpos;
    cout << 5 << endl;
    cout << -3 << endl;
    cout << noshowpos;
    cout << endl;
    //different number systems
    //std::dec is decimal
    //std:hex is hexadecimal
    //std::oct is octal
    //std::showbase shows the base as 0x and 0
    //std::noshowbase resets it
    int a1 = 12412;
    int a2 = -12412;
    float a3 = 134.123;
    cout << showbase;
    cout << "dec, hex and oct for unsigned int : " << dec << a1 << ' ' << hex << a1 << ' ' << oct << a1 << endl;
    cout << "dec, hex and oct for signed int : " << dec << a2 << ' ' << hex << a2 << ' ' << oct << a2 << endl;
    cout << "dec, hex and oct for float : " << dec << a3 << ' ' << hex << a3 << ' ' << oct << a3 << endl;
    cout << noshowbase;
    cout << endl;

    //std::fixed centers the display at the decimal point
    int b1 = 123;
    double b2 = 314;
    double b3 = 213e-12;
    cout << fixed;
    cout << b1 << endl;
    cout << b2 << endl;
    cout << b3 << endl;
    //std::scientific displays the number in scientific notation
    cout << scientific;
    cout<< b1 <<endl;
    cout << b2 << endl;
    cout << b3 << endl;
    cout.unsetf(std::ios::scientific | std::ios::fixed); //unset scientific and fixed notation
    cout << endl;

    //std::setprecision sets number of digits in output
    double c1 = 123.13413413135135135;
    cout << setprecision(5);
    cout << c1 << endl;
    cout << endl;

    //std::showpoint shows decimal point even if the decimal part is zero
    //std::noshowpoint does the opposite
    double c2 = 12.0;
    cout << showpoint << c2 << endl;
    cout << noshowpoint << c2 << endl;
    cout << endl;

    //std::uppercase shows characters in uppercase
    //std::nouppercase does the opposite
    



    
}