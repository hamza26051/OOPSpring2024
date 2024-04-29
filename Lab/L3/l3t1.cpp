#include <iostream>
#include <string>

using namespace std;

class BoardMarker {
private:
    string brand;
    string shade;
    bool refillable;
    bool ink_status;

public:

    void setBrand(string value) {
        brand = value;
    }

    string getBrand() const {
        return brand;
    }

    void setShade(string value) {
        shade = value;
    }

    string getShade() const {
        return shade;
    }

    void setRefillable(bool value) {
        refillable = value;
    }

    bool getRefillable() const {
        return refillable;
    }

    void setInkStatus(bool value) {
        ink_status = value;
    }

    bool getInkStatus() const {
        return ink_status;
    }

    void writing() {
        if (ink_status) {
            cout << "Writing with " << brand << " " << shade << " marker." << endl;
        } else {
            cout << "Cannot write. Ink is empty." << endl;
        }
    }

    void refilling() {
        if (refillable) {
            ink_status = true;
            cout << "Refilling " << brand << " " << shade << " marker." << endl;
        } else {
            cout << "Cannot refill. Marker is not refillable." << endl;
        }
    }
};

int main() {
    BoardMarker marker;

    marker.setBrand("pilot");
    marker.setShade("blue");
    marker.setRefillable(true);
    marker.setInkStatus(true);

    cout << "Brand: " << marker.getBrand() << endl;
    cout << "Shade: " << marker.getShade() << endl;
    
    marker.writing();
    marker.refilling();

    return 0;
}
