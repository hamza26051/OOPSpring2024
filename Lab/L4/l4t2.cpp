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
    Book() : name("RICH DAD, POOR DAD"), author("Robert"), Isbn(343), pages(1000), read(0) {}

    void setName(const string& newName) {
        name = newName;
    }

    void setAuthor(const string& newAuthor) {
        author = newAuthor;
    }

    void setIsbn(double newIsbn) {
        Isbn = newIsbn;
    }

    void setPages(double newPages) {
        pages = newPages;
    }

    void setRead(double newRead) {
        read = newRead;
    }

    void reading() {
        int no;

        if (read == pages) {
            cout << "BOOK COMPLETELY READ\n";
            exit(0);
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
                exit(0);
            }
        }
    }

    
    void showBookInfo() {
        cout << "Book Information:\n";
        cout << "Name: " << name << endl;
        cout << "Author: " << author << endl;
        cout << "ISBN: " << Isbn << endl;
        cout << "Total Pages: " << pages << endl;
        cout << "Pages Read: " << read << endl;
    }
};

int main() {
    Book defaultBook;
    defaultBook.showBookInfo();
    defaultBook.setName("New Book Title");
    defaultBook.setAuthor("New Author");
    defaultBook.setIsbn(234);
    defaultBook.setPages(999);
    defaultBook.setRead(500);

    
    defaultBook.showBookInfo();

    defaultBook.reading();

    return 0;
}

