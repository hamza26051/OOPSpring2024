/*
Name: Hamza Sheikh
Date:20/3/24
Roll no: 23k-0060
*/
#include <iostream>
#include <cstdlib> 
#include <ctime>   
#include <string>
using namespace std;

class Image {
private:
    float height;
    float width;
    int* imagedata;

public:
    Image(float h, float w, int data[], int size) : height(h), width(w) {
        imagedata = new int[size];
        for (int i = 0; i < size; i++) {
            imagedata[i] = data[i];
        }
    }

   Image(const Image& other) : height(other.height), width(other.width) {
        int size = other.width * other.height;
        imagedata = new int[size];
        for (int i = 0; i < size; i++) {
            imagedata[i] = other.imagedata[i];
        }
    }
    void updateData() {
        srand(time(0));
        for (int i = 0; i < height * width; i++) {
            if (imagedata[i] <= 0) {
                imagedata[i] = rand() % 255 + 1; 
        }
    }
};

    ~Image() {
        delete[] imagedata;
    }

    void display() {
        cout << "Image height: " << height << " units" << endl;
        cout << "Image width: " << width << " units" << endl;
        cout << "Image data: ";
        int i;
        for ( i = 0; i < height * width; i++) {
            cout << imagedata[i] << " ";
        }
        cout << endl;
    }
};

int main() {

    int data[] = {100, 200, 300, 0, -50, 0};
    Image img1(2, 3, data, 6);

    cout << "Original Image:" << endl;
    img1.display();
    Image img2 = img1;

    cout << "\nCopied Image:" << endl;
    img2.display();
    img1.updateData();
    img2.updateData();
    cout << "\nOriginal Image after update:" << endl;
    img1.display();
    cout << "\nCopied Image after update:" << endl;
    img2.display();

    return 0;
}
   

