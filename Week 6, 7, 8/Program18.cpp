#include <iostream>

// I.S Latihan II (Program Switch Statment)
// F.S Menampilkan proses Switch Statment

using namespace std;

int main () {

    //Kamus
    char nama ;
     cout << "Masukan Nama :";
    cin >> nama; //Perintah Masukan nilai nama (jenis data char)
        
    //Proses switch statment
    // tipe data char di baca hanya satu karakter saja
    
    switch (nama) {
    case 'A' : cout << "nama saya Amir" << endl;
    break;
    
    case 'R' : cout << "nama saya Roni" << endl;
    break;
    
    case 'S' : cout << "nama saya Setiawan" << endl;
    break;
    
    case 'J' : cout << "nama saya Juwita" << endl;
    break;
    
    default : cout << "Tidak ada nama" << endl;
}
    return 0;
}