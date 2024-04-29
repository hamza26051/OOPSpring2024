#include <iostream>
#include <string>

using namespace std;

class Book {
    string name;
    string author;
    double Isbn;
    double pages;
    double read;

public:   
    Book() : name("RICH DAD, POOR DAD"), author("Robert"), Isbn(343), pages(500), read(345) {}

    Book(string Name, string Author, double isbn, double Pages, double Read)
        : name(Name), author(Author), Isbn(isbn), pages(Pages), read(Read) {}

   void reading() {
    int no;

    if (read == pages) {
        cout << "BOOK COMPLETELY READ\n";
        return;
    }

    cout << endl << "Have you read the book:\n" << name << " today? (Enter 1 if you have) ";
    cin >> no;

    if (no == 1 && read < pages) {
        cout << "Please enter the number of pages you read:\n";
        cin >> no;
        read += no;
        cout << "You have read a total of " << read << " pages out of " << pages << endl;

        if (read == pages) {
            cout << "BOOK COMPLETELY READ\n";
            return; }
    }
}

    
    void displayInfo() {
        cout << "Book Name: " << name << endl;
        cout << "Author: " << author << endl;
        cout << "ISBN: " << Isbn << endl;
        cout << "Total Pages: " << pages << endl;
        cout << "Pages Read: " << read << endl;
    }
};

int main() {

    Book defaultBook;
    defaultBook.displayInfo();
    defaultBook.reading();

    
    Book paramBook("The Catcher in the Rye", "Salinger", 196, 278, 100);
    paramBook.displayInfo();
    paramBook.reading();

    return 0;
}

