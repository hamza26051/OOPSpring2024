/*
    Name: Hamza Sheikh
    Roll no: 23k-0019
*/
#include <iostream>
using namespace std;

class Character{
    protected:
    int Health, Damage;
    public: 
    Character(){}
    Character(int health, int damage){
        Health = health;
        Damage = damage;
    }
    void DisplayCharacter(){
        cout<<"Character Details: "<<endl;
        cout<<" Health: "<<Health<<endl;
        cout<<" Damage: "<<Damage<<endl;
    }
};

class Enemy: public Character{
    public:
    Enemy(int health, int damage){
        Health = health;
        Damage = damage;
    }
    void DisplayEnemy(){
        cout<<"Enemy Details: "<<endl;
        cout<<" Health: "<<Health<<endl;
        cout<<" Damage: "<<Damage<<endl;
    }
};

class Player: public Character{
    public:
    Player(){}
    Player(int health, int damage){
        Health = health;
        Damage = damage;
    }
    void DisplayPlayer(){
        cout<<"Player Details: "<<endl;
        cout<<" Health: "<<Health<<endl;
        cout<<" Damage: "<<Damage<<endl;
    }
};

class Wizard : public Player{
    int MagicPower;
    string Spells; 
    public: 
    Wizard(int health, int damage, int magicpower, string spells){
        Health = health;
        Damage = damage;
        MagicPower = magicpower;
        Spells = spells;
    }
    void DisplayWizard(){
        cout<<"Wizard Details: "<<endl;
        cout<<" Health: "<<Health<<endl;
        cout<<" Damage: "<<Damage<<endl;
        cout<<" Magic Power: "<<MagicPower<<endl;
        cout<<"	Spells: "<<Spells<<endl;
    }
};
int main(){
    Wizard wizard(70, 60, 80, "Lumos and Expecto Patronum");

    wizard.DisplayWizard();
}
