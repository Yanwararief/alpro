#include<iostream>
//I.S Menghitung berapa banyak sebuah char dalam array
//F.S Menampilkan fungsi array

using namespace std;

int main() {
    //Kamus
    int j = 0;
    string array[10];
    
    cout << "Masukan Array" << endl;
    
    //Masukan 1 char untuk 1 Array
    for (int i = 0; i < 10; i++){
    cout << "Elemen " << i+1 << " = ";
    cin >> array[i]; } 
    
    //Menghitung sebuah char dalam array yang telah di isi sebelumnya
    for (int i = 0; i < 10; i++) {
        //Ex. Mencari char "a" dalam array
    if (array[i] == "a") {j++;}
    }
    
    //Menampilkan hasil Pencarian
    cout << "Jumlah Kemunculan elemen a :" << j;
    return 0;
}