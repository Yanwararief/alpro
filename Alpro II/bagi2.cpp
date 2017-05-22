#include<iostream>
//I.S Bagi 2 Search
//F.S Menampilkan Proses Bagi 2 Search, Ket : bagi2.txt
using namespace std;

int main() {
    
    //Kamus
    int X[] = {2,3,4,5,6,7,8,9,10,11};
    int cari, i, j, k;
    
    //Input Pencarian Angka
    cout << "Masukan Angka Yang Anda Cari : ";
    cin >> cari;
    
    //Proses
    i = 0; //Batas Kiri
    j = 9; //Batas Kanan
    k = (i+j)/2; //Batas Tengah
    
    while (i <= j) {
        if (X[k] == cari) {
            cout << "Data Di Temukan di Indeks ke " << k;
            break; } 
        
        else if (X[k] < cari) { i = k + 1; }
        else { j = k - 1;}
        
        k = (i+j)/2;
    }
    
    if (i > j) {
        
        cout << "Data tidak ditemukan";
    }
}