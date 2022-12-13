#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v1 = {1,2,3,4,5};

    cout << v1[0] << " " << v1[1] << '\n';

    //first and last element
    cout << v1.front() << " " << v1.back() << endl;

    //size of vector
    cout << v1.size() << endl;

    //capacity of vector
    //how many elements can a vector hold. need not be equal to the current size of the vector
    cout << v1.capacity() << endl;

    //append elements
    v1.push_back(6);

    //pop elements
    v1.pop_back(); //return the last element and remove it

    //shrink vector capacity to fit the size
    v1.shrink_to_fit();

    //prepend elements
    v1.insert(v1.begin(),0);

    //insert elements at some index
    v1.insert(v1.begin()+1,5); //this happens because v1.begin() is a pointer. just add the index to v1.begin() to insert at that position
    


}