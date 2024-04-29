/*  Programmer:Hamza Sheikh
	Date:9/02/24
	Description: building a library management system
	*/


#include <iostream>
#include <string>

using namespace std;

const int maxBooks = 100; 

struct Book {
    string title;
    string author;
    string YOP;  
    string genre;
};

void display(const Book books[], int num) {
    for (int i = 0; i < num; i++) {
        cout << "Book " << i + 1 << " name: " << books[i].title << "\n";
        cout << "Book " << i + 1 << " author: " << books[i].author << "\n";
        cout << "Book " << i + 1 << " year of publication: " << books[i].YOP << "\n";
        cout << "Book " << i + 1 << " genre: " << books[i].genre << "\n\n";
    }
}

void add(Book books[], int& num) {
    if (num < maxBooks) {
        cout << "Enter book name: ";
        cin >> books[num].title;
        cout << "Enter book author: ";
        cin >> books[num].author;
        cout << "Enter book's year of publication: ";
        cin >> books[num].YOP;
        cout << "Enter book genre: ";
        cin >> books[num].genre;
        num++;
    } else {
        cout << "Library is full. Cannot add more books.\n";
    }
}

void search(const Book books[], int num) {
    int choice;
    cout << "Press 1 to search on the basis of title\n";
    cout << "Press 2 to search on the basis of author\n";
    cin >> choice;

    int flag = -1;  
    string searchName;

    if (choice == 1) {
        cout << "Enter the title of the book: ";
        cin >> searchName;
        for (int i = 0; i < num; i++) {
            if (searchName == books[i].title) {
                flag = i;
                break;  
            }
        }
    } else if (choice == 2) {
        cout << "Enter the author of the book: ";
        cin >> searchName;
        for (int i = 0; i < num; i++) {
            if (searchName == books[i].author) {
                flag = i;
                break;  
            }
        }
    }

    if (flag != -1) {
        cout << "Book name: " << books[flag].title << "\n";
        cout << "Book author: " << books[flag].author << "\n";
        cout << "Book year of publication: " << books[flag].YOP << "\n";
        cout << "Book genre: " << books[flag].genre << "\n";
    } else {
        cout << "Book not found.\n";
    }
}

void update(Book books[], int num) {
    int choice;
    cout << "Press 1 to search on the basis of title\n";
    cout << "Press 2 to search on the basis of author\n";
    cin >> choice;

    int flag = -1;  
    string searchName;

    if (choice == 1) {
        cout << "Enter the title of the book: ";
        cin >> searchName;
        for (int i = 0; i < num; i++) {
            if (searchName == books[i].title) {
                flag = i;
                break;  
            }
        }
    } else if (choice == 2) {
        cout << "Enter the author of the book: ";
        cin >> searchName;
        for (int i = 0; i < num; i++) {
            if (searchName == books[i].author) {
                flag = i;
                break;  
            }
        }
    }

    if (flag != -1) {
    	cout << "Enter new book title: ";
    	cin >> books[flag].title;
        cout << "Enter new book author: ";
    	cin >> books[flag].author;
    	cout << "Enter new book year of publication: ";
    	cin >> books[flag].YOP;
    	cout << "Enter new book genre: ";
    	cin >> books[flag].genre;
    	cout << "Changes successful.\n";
    } else {
        cout << "Book not found.\n";
    }
}

int main() {
    Book books[maxBooks];
    int num = 0;
    int n;

    while (true) {
        cout << "Press 0 to exit\n";
        cout << "Press 1 to display all the books\n";
        cout << "Press 2 to add a new book\n";
        cout << "Press 3 to search for a book\n";
        cout << "Press 4 to update a book\n";
        cout << "Enter your choice: ";
        cin >> n;
  system("cls");
        switch (n) {
            case 0:
                exit(0);
            case 1:
                display(books, num);
                break;
            case 2:
                add(books, num);
                break;
            case 3:
                search(books, num);
                break;
            case 4:
                update(books, num);
                break;
            default:
                cout << "Invalid choice. Please enter a number between 0 and 4.\n";
        }
    }

    return 0;
}

