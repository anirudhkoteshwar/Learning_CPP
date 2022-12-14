#include<iostream>
#include<string>
using namespace std;

class Person {
    public:
        string name;
        int age;
        string nationality;
};

class Book {
    //constructor
    //basically an __init__ function
    //one class can have multiple constructors, which will execute depending upon the arguments provided
    public:    
        string title;
        string author;
        int pages;

        Book(){
            cout << "No title provided" << '\n' << "No author provided" << '\n' << "No pages provided" << endl;
        }

        Book(string aTitle,string aAuthor,int aPages){
            title = aTitle;
            author = aAuthor;
            pages = aPages;
            cout << title << " " << author << " " << pages << endl;
        }
};

int main(){
    Person p1;
    p1.name = "Nikola Tesla";
    p1.age =  166;
    p1.nationality = "American";

    Book b1;
    Book b2("Wings of Fire","Kalam",300);

}