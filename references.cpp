#include <iostream>
using namespace std;

int main(){
    int var1 {10};
    double var2 {10.45};

    //setting references to varaibles
    int& ref_var1 {var1}; //initialization
    int& ref_var1_2 = var1; //assignment
    double& ref_var2 {var2};

    cout << "first variable is " << var1 << " and the reference variable is " << ref_var1 << endl;
    cout << "first variable address is " << &var1 << " and the reference variable address is " << &ref_var1 << endl;
    var1 += 1;
    cout << ref_var1 << endl;
    ref_var2 += 1;
    cout << var2 << endl;


}