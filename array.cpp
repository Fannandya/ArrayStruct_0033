#include <iostream>
using namespace std;

// mendeklarasikan array tanpa ukuran, wajib diberi nilai awal
int nilai[]={1, 2, 3};

// mendeklarasikan array dengan ukuran dan diberi milai awal
string nama[5]={"ben", "agus", "fara", "ama", "akila"};

// mendeklarasikan array dengan ukuran dan tanpa nilai awal
float skor[5];

int main (){
    cout << "nama pada index 4 adalah " << nama[3] << endl;
    // memberi nilai pada elemen array per index
    nama[3] = "husna";
    cout << "nama pada index 4 adalah " << nama[3] << endl;

    cout << "input skor" << endl;
    cout << endl;

    // memberi nilai awal array dengan looping for
    for (int i = 0; 1<5; i++){
        cout << "skor ke- " << i+1 << " =";
        cin >> skor[i];
    }

    cout << "menampilkan skor" << endl;
    cout << endl;
    
    // memberi nilai awal array dengan looping for
    for (int i = 0; 1<5; i++){
        cout << "skor ke- " << i+1 << " =" << skor[i] << endl;
    }

}