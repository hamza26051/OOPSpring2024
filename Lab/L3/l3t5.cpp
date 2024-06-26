
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

const int MAX_ITEMS = 100;

class StationaryShop {
    private:
        string items[MAX_ITEMS];
        double prices[MAX_ITEMS];
        int itemCount;

    public:
        StationaryShop() : itemCount(0) {}

    void addItem(const string& item, double price) {
        if (itemCount < MAX_ITEMS) {
            items[itemCount]=item;
            prices[itemCount]=price;
            cout<<"Item added successfully: "<<item<<" (Price: $"<<fixed<<setprecision(2)<<price<<")"<<endl;
            itemCount++;
        } else {
            cout<<"Shop inventory is full. Cannot add more items."<<endl;
        }
    }

    void displayItems() {
        cout<<"Items available in the shop:"<<endl;
        for(int i=0;i<itemCount;i++) {
            cout<<i+1<<". "<<items[i]<<" - $"<<fixed<<setprecision(2)<<prices[i]<<endl;
        }
    }

    void modifyPrice(int index, double newPrice) {
        if (index >= 1 && index <= itemCount) {
            prices[index - 1] = newPrice;
            cout << "Price of " << items[index - 1] << " updated to $" << fixed << setprecision(2) << newPrice << endl;
        } else {
            cout << "Invalid item index!" << endl;
        }
    }
void generateReceipt(const int purchases[], const int quantities[], int purchaseCount) const {
        cout << "\nReceipt:" << endl;
        double total = 0;
        for (int i=0; i<purchaseCount; i++) {
            int index = purchases[i] - 1;
			           if (index >= 0 && index < itemCount) {
                cout << items[index] << " x " << quantities[i] << " - $" << fixed << setprecision(2) << prices[index] * quantities[i] /*calculating price of each items*/<< endl;
                total += prices[index] * quantities[i];
            }
        }
        cout<<"Total: $"<<fixed<<setprecision(2)<<total<<endl;
    }
};

int main() {
    StationaryShop shop;
    int choice;
    string item;
    double price;
    int index; int purchases[MAX_ITEMS];
    
	int quantities[MAX_ITEMS];
    int purchaseCount = 0;

    cout << "Welcome to the Stationary Shop!" << endl;

    while (true) {
        cout << "\nshop Menu:" << endl;
        cout << "1. Add item and price" << endl;
        cout << "2. Display items" << endl;
        cout << "3. Modify price" << endl;
        cout << "4. Generate receipt" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            
			case 1:
                cout << "Enter item name: ";
                cin >> item;
                cout << "Enter item price: ";
                cin >> price;
                shop.addItem(item, price);
                break;
            
			case 2:
                shop.displayItems();
                break;
            
			case 3:
                cout << "Enter item index to modify price: ";
                cin >> index;
                cout << "Enter new price: ";
                cin >> price;
                shop.modifyPrice(index, price);
                break;
            
			case 4:
                cout << "Enter purchased items (item index and quantity):" << endl;
                cout<<"enter zero at index when done entering items so reciept will be generated"<<endl;
                while (true) {
                    cin >> index;
                    if (index == 0){
					    break;	
					} 
                    cout<<"Quantity: ";
                    cin>>quantities[purchaseCount];
                    purchases[purchaseCount++]=index;
                }
                shop.generateReceipt(purchases, quantities, purchaseCount);
                break;
            
			case 5:
                cout << "Exiting program. Goodbye!" << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
