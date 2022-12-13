#include<iostream>
#include<set>
using namespace std;

int main(){
    //ordered collection of unique elements
    set<char> s1 = {'C','D','C','D'};
    for(auto i : s1){
        cout << i << endl;
    }
    //alternatively
    for(auto i = s1.begin(); i != s1.end(); ++i){
        cout << *i << endl;
    }

    //insert elements to a set
    s1.insert('A');
    
    //remove elements
    s1.erase('D');
    
}