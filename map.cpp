#include <iostream>
#include <map>
using namespace std;

int main() {
    //essentially a python dictionary
    //ordered by key, better for search algos as it takes O(1) time
    map<char,int> m1 = {{'a',1},{'b',2},{'c',3}};

    //accessing values
    cout << m1['a'] << " " << m1['b'] << " " << m1['c'] << endl;

    //accessing value with key that doesnt exist
    cout << m1['u'] << endl; //you get 0 because default value of int is 0
    //this isnt the best output because m1['u'] could just be mapped to 0

    //inserting items to maps
    m1['d'] = 4;
    m1.insert(pair<char,int>('e',5)); //pairs just combine two values which can be of different datatypes
    


}