#include<iostream>

//I.S Latihan XII (Array PEngulangan)
//F.S Memahami jenis data array dalam sebuah program

using namespace std;

int main () {
    
    //Kamus
    int n [20];

    
    //Fungsi Pengulangan
    //for (Inisialisasi;Kondisi;Increment) *Program 21 
    for (int i = 0; i < 25; i++) 
    
    //Aksi 
    //Fungsi pengulangan Increment yang berulang mulai 0 hingga < 25 di bilangan 2000
    { n [i] = i + 2000; }
    
    //Fungsi Pengulangan
    //for (Inisialisasi;Kondisi;Increment) *Program 21 
    for (int j = 0; j < 25; j++) 
    
    //Aksi
    //Menampilkan Hasil Pengulangan
    { cout << "Tahun " << j << " : " << n [j] << endl; }
    
    
    //Catatan : Jika Nilai Array lebih kecil dari pada nilai kondisi 
    // maka array hanya akan menampung pengulangan sesuai ukuran array. 
    //(Contoh di aplikasi ini ukuran array [20] kondisi pengulangan < 25)
    
return 0;



}