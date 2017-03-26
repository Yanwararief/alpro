#include <iostream>
//I.S Latihan III Aplikasi Pemfaktorial
//F.S Metode Rekursi (Suatu Proses memangil dirinya sendiri)

using namespace std;

//Prototype Fungsi
long rek(int f);
    
int main () { 

    //Kamus
    int x;
    int n = 4;
    
    //Menampilkan Faktorial dari variabel n 
    cout << n << "! = " << rek(n) << endl;
    
    n = 9;
    //Nilai N di ubah menjadi 9
    //Menampilkan Faktorial dari variabel n 
    
    cout << n << "! = " << rek(n) << endl;
    
    //Memasukan Nilai N secara Manual untuk di faktorial kan
    cout << "Masukan Angka yang akan difaktorialkan : ";
    cin >> x;
    
    //Menampilkan Faktorial hasil Inputan
    cout << x << "! = " << rek(x) << endl;
    
    return 0;

}

//Fungsi Faktorial
long rek(int f) { 

    if (f == 0) //Jika yang di faktorialkan adalah 0
    return 1; // Akan menampilkan nilai 1
    
    //Jika Bukan 0 akan menampilak fungsi dibawah ini
    else return f * rek(f-1); // Penghenti
}
    
