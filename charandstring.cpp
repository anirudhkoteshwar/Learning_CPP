#include <iostream>
using namespace std;

int main(){
    //chech if a character is alphanumeric

    std::cout << "Is 'c' alphanumeric ? : " << std::isalnum('c') << std::endl; //nonzero value means true
    std::cout << "Is '^' alphanumeric ? : " << std::isalnum('^') << std::endl; //zero means false


    char test{'*'};
    if (isalnum(test)){
        cout << test << " is an alphanumeric character" << endl;
    }
    else {
        cout << test << " is not an alphanumeric character" << endl;
    }

    //check if a character is an alphabet
    char test2 {'a'};
    if (isalpha(test2)){
        cout << test2 << " is an alphabet character" << endl;
    }
    else {
        cout << test2 << " is not an alphabet character" << endl;
    }

    if (isalpha(test)){
        cout << test << " is an alphabet character" << endl;
    }
    else {
        cout << test << " is not an alphabet character" << endl;
    }

    //check if a character is a number
    //works only for single digit numbers
    char num {'9'};
    if (isdigit(num)){
        cout << num << " is a number character" << endl;
    }
    else {
        cout << num << " is not a number character" << endl;
    }

    //check if a character is a blank
    char message[] {"Hello this is a test message."};
    int blank_count {0};
    for (size_t i{0}; i < size(message); ++i){
        if (isblank(message[i])) {
            cout << "Found a blank at index " << i << endl;
            ++blank_count;
        }
    }
    cout << "Found " << blank_count << " blanks in total." << endl;

    //check if character is lowercase or uppercase
    cout << islower('c') << endl;
    cout << islower('C') << endl;
    cout << isupper('C') << endl;
    cout << isupper('c') << endl;




    return 0;
}