#include <iostream>
#include <string>
using namespace std;

struct weapon
{
    string name;
    int damage;
};

struct player
{
    string name;
    string id;
    string level;
    weapon weapon;
};

int main(){
    player pl[3];

    for(int i = 0; i<3; i++){
        cout << "masukkan nama player = ";
        getline(cin, pl[i].name);
        cout << "masukkan id = ";
        cin >> pl[i].id;
        cout << "masukkan level = ";
        cin >> pl[i].level;
        cin.ignore();

        cout << "masukkan nama weapon = ";
        getline(cin, pl[i].weapon.name);
        cout << "masukkan damage = ";
        cin >> pl[i].weapon.damage;
        cin.ignore();

    }


    cout << endl;
    cout << "tampilkan player" << endl;
    for ( int i = 0; i < 3; i++)
    {
        cout << "nama player = " << pl[i].name << endl;
        cout << "id player" << pl[i].id << endl;
        cout << "level player" << pl[i].level << endl;
        cout << endl;
        cout << "nama weapon = " << pl[i].weapon.name << endl;
        cout << "damage weapon = " << pl[i].weapon.damage << endl;   
    }
    
    
}
