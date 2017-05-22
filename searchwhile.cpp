#include<iostream>
//I.S Linear Search
//F.S Menampilkan Proses Linear Search, Ket : searchwhile.txt
using namespace std;
int main() {
    
    //Kamus
    int array[] = {2,3,4,5,6,7,8,9,10,11};
    int cari;
    
    //Input Pencarian Angka
    cout << "Masukan Angka Yang Anda Cari : ";
    cin >> cari;
    
    //Proses
    int i = 0;
    while ( i < sizeof(array) / sizeof(*array) && array[i] != cari) i++;
    
    //Menampilkan Hasil
    if ( i != sizeof(array) / sizeof(*array)) {
        
        cout << "Angka di Temukan di Index[" << i << "]" << endl;
        cout << "Angka di Dalam Index[" << i << "] Adalah = " << array[i] << endl;
        
    } else {
    
        cout << "Angka Tidak di Temukan" << endl; 
    }
}