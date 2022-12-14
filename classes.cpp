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
    private:
        int rating;

    public:    
        string title;
        string author;
        int pages;

        Book(){
            cout << "No title provided" << '\n' << "No author provided" << '\n' << "No pages provided" << endl;
        }

        Book(string aTitle,string aAuthor,int aPages,int aRating){
            title = aTitle;
            author = aAuthor;
            pages = aPages;
            setRating(aRating);
            cout << title << " " << author << " " << pages << endl;
        }

        bool isLight() {
            if(pages > 250){
                return false;
            }
            return true;
        }   

        void setRating(int a){
            if(a==13 || a==19 || a==3){
                rating = a;
            }
            else{
                rating = 0;
            }
        }

};

int main(){
    Person p1;
    p1.name = "Nikola Tesla";
    p1.age =  166;
    p1.nationality = "American";

    Book b1;
    Book b2("Wings of Fire","Kalam",300,12);
    cout << b2.isLight() << endl;
    
}