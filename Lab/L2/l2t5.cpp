/*  Programmer:Hamza Sheikh
	Date:8/02/24
	Description: building products management system
	*/



#include <iostream>
#include <string>

const int max = 100;

using namespace std;

struct product {
    string id;
    string name;
    double price;
    int quantity;
};

void add(product products[100], int& num) {
    cout << "Enter the new product id: ";
    cin >> products[num].id;
    cout << "Enter the new product name: ";
    cin >> products[num].name;
    cout << "Enter the new product price: ";
    cin >> products[num].price;
    cout << "Enter the new product quantity: ";
    cin >> products[num].quantity;
    num++;  
}


void display(product products[100], int num) {
    string id;
    cout << "Enter the id: ";
    cin >> id;
    int i;
    int flag = -1;
    for (i = 0; i < num; i++) {
        if (id == products[i].id) {
            flag = i;
            break;
        }
    }
    if (flag == -1) {
        cout << "Product not found\n";
        exit(1);
    } else {
        cout << "Product id: " << products[flag].id << endl;
        cout << "Product name: " << products[flag].name << endl;
        cout << "Product price: " << products[flag].price << endl;
        cout << "Product quantity: " << products[flag].quantity << endl;
    }
}

void update(product products[100], int num) {
    string id;
    cout << "Enter the id: ";
    cin >> id;
    int flag = -1;
    int i;
    for (i = 0; i < num; i++) {
        if (id == products[i].id) {
            flag = i;
            break;
        }
    }
    if (flag == -1) {
        cout << "Product not found\n";
        exit(1);
    } else {
        cout << "Enter new product id: ";
        cin >> products[flag].id;
        cout << "Enter new product name: ";
        cin >> products[flag].name;
        cout << "Enter new product price: ";
        cin >> products[flag].price;
        cout << "Enter new product quantity: ";
        cin >> products[flag].quantity;
    }
}

int main() {
    product products[100];
    int num = 0;
    int n;

    while (true) {
        cout << "Press 0 to exit\n";
        cout << "Press 1 to add a product\n";
        cout << "Press 2 to find a product\n";
        cout << "Press 3 to update a product\n";
        cin >> n;

        if (n == 0) {
            exit(0);
        } else if (n == 1) {
            add(products, num);
        } else if (n == 2) {
            display(products, num);
        } else if (n == 3) {
            update(products, num);
        } else {
            cout << "Invalid choice\n";
        }
    }

    return 0;
}


