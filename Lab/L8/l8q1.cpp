/*
    Name: Hamza Sheikh
    Roll no: 23k-0060
*/
#include <iostream>
using namespace std;

class Book{ 
    protected:
    string Title, Author, Publisher;
    public: 
    Book(){}
    Book(string title, string author, string publisher){
        Title = title;
        Author = author;
        Publisher = publisher;
    }
    void Display(){
        cout<<"Book Information: "<<endl;
        cout<<" Title: "<<Title<<endl;
        cout<<" Author: "<<Author<<endl;
        cout<<" Publisher: "<<Publisher<<endl;
    }
};

class FictionBook : public Book{
    string Genre;
    string Protagonist;
    public:
   
    FictionBook(string title, string author, string publisher, string genre, string protagonist){
        Title = title;
        Author = author;
        Publisher = publisher;
        Genre = genre;
        Protagonist = protagonist;      
    }
    void Display(){
        cout<<"Fiction Book's Information: "<<endl;
        cout<<" Title: "<<Title<<endl;
        cout<<" Genre: "<<Genre<<endl;
        cout<<" Protagonist: "<<Protagonist<<endl;
        cout<<" Author: "<<Author<<endl;
        cout<<" Publisher: "<<Publisher<<endl;
    }
};

int main(){
    FictionBook book1("GAME OF THRONES", "MOHAMMED", "YESAULLAH", "HISTORY", "SABEEH");

    book1.Display();
}
