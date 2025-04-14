#include <iostream>
#include <string>
using namespace std;

struct player
{
    string name;
    string id;
    string level;
};

int main(){
    player pl;

    cout << "masukkan nama player = ";
    getline(cin, pl.name);
    cout << "masukkan id = ";
    getline(cin, pl.id);
    cout << "masukkan level = ";
    getline(cin, pl.level);

    cout << "tampilkan player" << endl;
    cout << "nama player = " << pl.name << endl;
    cout << "id player" << pl.id << endl;
    cout << "level player" << pl.level << endl;
}
