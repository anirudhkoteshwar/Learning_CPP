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
    
}
