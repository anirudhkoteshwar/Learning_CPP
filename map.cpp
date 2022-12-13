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

    //erase elements
    m1.erase('d');
    
    //clear a map
    //m1.clear()

    //check if map is empty
    cout << m1.empty() << endl; //1 if empty 0 if not

    //get size of a map
    cout << m1.size() << endl;

    //iterating through a map
    for (map<char,int>::iterator i = m1.begin(); i != m1.end(); ++i){ //m1.begin() points the iterator to the first item and ++i moves the iterator to the next item. you could use auto instead just for shorter code.
    cout << (*i).first << " " << (*i).second << '\n'; //dereference the iterator and get the first or second values. 

    //another way to write this
    cout << i->first  << " " << i->second << endl; //dereference the poiter and access an attribute associated with it.
    //i is a pointer to a pair and we can dereference and access the first and second methods.
    }

}