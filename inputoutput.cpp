#include <iostream>

//using namespace std;
int main(){
    int n1,n2;
    std::string name;
    int age;
    std::cout << "Enter a number : " << std::endl;
    std::cin >> n1;
    std::cout << "Enter another number : " << std::endl;
    std::cin >> n2;
    std::cout << "The sum is " << (n1 + n2) << std::endl;
    std::cout << "Whats your name and age ? " << std::endl;
    std::getline(std::cin >> std::ws, name); //the std::ws is needed to extract the whitespaces too
    //std::cin >> std::ws >> name; //this doesn't work 
    std::cin >> age;
    std::cout << "Hello, " << name << "! You're " << age << " years old." << std::endl;

}