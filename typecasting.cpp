#include<iostream>
using namespace std;

int main(){

    //type punning
    int a = 50;
    double b = a; //implicit conversion 
    double c = (double)a; //explicit conversion
    double& d = *(double*)&a; //this is a bad idea because these two types have different sizes.
    //to explain the line above, d is a reference to a dereferenced double pointer explicitly pointing to the memory of a
    //do not do this. its a bad idea and can crash the program

    //type casting

    //c style casting
    double x = 2.25;
    double y = (int)x + 0.75;
    cout << y << '\n';

    //c++ style cast
    //static cast
    double z = static_cast<int>(x) + 0.75;
    cout << z << '\n';

    //dynamic cast
    //no idea had some oop stuff

}
