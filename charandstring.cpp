#include <iostream>
using namespace std;

int main(){
    //chech if a character is alphanumeric
    std::cout << "Is 'c' alphanumeric ? : " << std::isalnum('c') << std::endl; //nonzero value means true
    std::cout << "Is '^' alphanumeric ? : " << std::isalnum('^') << std::endl; //zero means false

    return 0;
}