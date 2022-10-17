#include <iostream>
#include <limits> 
using namespace std;

int main(){
    cout << "The range of short is " << numeric_limits<short>::min() << " to " << numeric_limits<short>::max() << endl;
    cout << "The range of long is " << numeric_limits<long>::min() << " to " << numeric_limits<long>::max() << endl;
    cout << "The range of float is " << numeric_limits<float>::min() << " to " << numeric_limits<float>::max() << endl;
    cout << "The range of double is " << numeric_limits<double>::min() << " to " << numeric_limits<double>::max() << endl;
}