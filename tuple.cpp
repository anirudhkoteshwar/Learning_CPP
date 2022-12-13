#include <iostream>
#include <tuple>
using namespace std;

int main(){
    tuple<int, string> person(20, "Tim");
    cout << get<1>(person) << endl; //access elements through get<index>(tuple name)
    get<1>(person) = "Banana"; //set elements through get<index>(tuple name)
    cout << get<1>(person) << endl;
}