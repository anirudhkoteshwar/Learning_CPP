#include <iostream>
using namespace std;

int main(){
    //allocate arrays on the heap
    int size {10};
    double* p_salaries {new double[size]}; //array will contain garbage values
    int* p_students {new(nothrow) int[size]{}}; //all values initialized to 0
    double* p_scores {new(nothrow) double[size]{10,20,30,40,50}}; //first 5 values are set and the rest are 0
    
    //to access the values
    if(p_scores){ //if the pointer is not a null pointer
        for (int i{};i<size;++i){
            cout << "Value : " << p_scores[i] << " : " << *(p_scores + i) << endl; //first one is array form. second one is pointer form
        }
    }

    //to release the memory,
    delete[] p_salaries;
    p_salaries = nullptr;

    delete[] p_students;
    p_students = nullptr;

    delete[] p_scores;
    p_scores = nullptr;

    //range based for loops and std::size doesnt work here

    return 0;
}