#include <iostream>
//using namespace std;

int add_numbers(int a, int b){
    int sum = a + b;
    return sum;
}

int main(){
    int number1 = 10;
    int number2 {20};
    int sum = number1 + number2;
    std::cout << sum << std::endl;
    std::cout << add_numbers(2,5) << std::endl;
    std::cout << add_numbers(21,54) << std::endl;
    std::cout << add_numbers(62,45) << std::endl;
    std::cout << add_numbers(-124,45) << std::endl;

    return 0;
}

