#include <iostream>
#include <string>

using namespace std;

class Platform;

class Logo {
private:
    string logo;

public:
    Logo(string l) : logo(l) {}

    friend void changeLogo(Platform& platform, const string& newLogo);

    void display() const {
        cout << "Current logo: " << logo << endl;
    }
};

class Platform {
private:
    string name;
    Logo logo;

public:
    Platform(string n, string l) : name(n), logo(l) {}

    void display() const {
        cout << "Platform name: " << name << endl;
        logo.display();
    }

    friend void changeLogo(Platform& platform, const string& newLogo);
};

class Server {
private:
    string ipAddress;

public:
    Server(string address) : ipAddress(address) {}

    void display() const {
        cout << "Server IP Address: " << ipAddress << endl;
    }
};

void changeLogo(Platform& platform, const string& newLogo) {
    platform.logo = Logo(newLogo);
}

int main() {
    Platform twitter("Twitter", "Blue Bird");

    cout << "Original Platform Details:" << endl;
    twitter.display();

    changeLogo(twitter, "Doge Coin");

    cout << "Platform Details After Logo Modification:" << endl;
    twitter.display();

    return 0;
}

