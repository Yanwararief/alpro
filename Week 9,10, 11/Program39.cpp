#include <iostream>
//I.S Latihan I
//F.S Metode Iterasi (Suatu Proses Pengulangan memangil dirinya sendiri)
using namespace std;

//Fungsi yang akan di panggil Iterasi
void Iterasi(int i) {
    cout << "The number is :" << i << endl;
}

//Fungsi Main
int main () { 

    //Iterasi = Pengulangan
    //For(Inisialisasi, Kondisi, Increment)
    for (int i = 0; i < 10; i++) {
        Iterasi(i); //Menampilkan Fungsi Iterasi 
    }
return 0;
    
}