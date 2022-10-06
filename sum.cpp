#include <iostream>
using namespace std;

int add_numbers(int a, int b){
    int sum = a + b;
    return sum;
}

int main(){
    int number1 = 10;
    int number2 {20};
    int sum = number1 + number2;
    cout << sum << endl;
    cout << add_numbers(2,5) << endl;

    return 0;
}

