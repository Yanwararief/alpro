#include <iostream>

// I.S Latihan III (Program Switch Statment)
// F.S Menampilkan proses Switch Statment

using namespace std;

int main () {

        //Kamus
    int nilai ;
    cout << "Masukan Nilai A :";
    cin >> nilai; //Perintah Memasukan nilai (jenis data angka)
    
    //Proses Switch Stament dengan mengunakan tipe data int
    switch(nilai) {
    
    case 1 : cout << "jelek" << endl;
    break;
    
    case 2 : cout << "cukup" << endl;
    break;
    
    case 3 : cout << "lumayan" << endl;
    break;
    
    case 4 : cout << "bagus" << endl; 
    break;
    
    default : cout << "Tidak ada nilai" << endl; break;

}
    
}

