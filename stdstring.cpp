#include <iostream>
#include <string>
using namespace std;

int main(){
    //character arrays are annoying as you need to keep their size in mind
    //cstrings but much better
    string name {"Anirudh Koteshwar"};
    string name1 {name}; //initialize with exisiting strnig
    string msg(5,'e'); // initialize with multiple copies. Us () instead of {}
    string greeting {"Hello world",3,4}; //starts at index 3 and takes 4 characters
    cout << name << endl << msg << endl << greeting << endl;
    //git test   
}