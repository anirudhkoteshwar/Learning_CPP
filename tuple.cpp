#include <iostream>
#include <tuple>
using namespace std;

int main(){
    tuple<int, string> person(20, "Tim");
    cout << get<1>(person) << endl; //access elements through get<index>(tuple name)
    get<1>(person) = "Banana"; //set elements through get<index>(tuple name)
    cout << get<1>(person) << endl;

    tuple<int,char,float,bool> thing; //another method of initializing tuples
    thing = make_tuple(21,'c',43.23,false);

    //swap values of two same typed tuples
    tuple<int,char> t1(10,'a');
    tuple<int,char> t2(20,'b');
    t1.swap(t2);
    cout << "t1: " <<get<0>(t1) << " " << get<1>(t1) << endl;
    cout << "t2: " <<get<0>(t2) << " " << get<1>(t2) << endl;

    //decompose tuple into variables
    int x;
    char y;
    tie(x,y) = t2;
    cout << x << " " << y << endl;

    //concatonate tuples
    tuple<int,string,int,char> t3 = tuple_cat(person,t1);
    cout << "t3: " << get<0>(t3) << " " << get<1>(t3) << " " <<get<2>(t3) << " " << get<3>(t3) << endl;
}
