#include <iostream>

// I.S Program Operator Perbandingan
// F.S Menampilkan data Perbandingan dengan bilangan konstanta
using namespace std;

int main () {

    //Kamus
    int a = 21; //Konstanta
    int b = 10; //Konstanta
    int c;
    
//Fungsi IF digunakan untuk melakukan perbandingan  
    //if (Kondisi) {Statment jika Benar} else {Statment jika Salah}
    
if (a == b) {
cout << " Nilai A sama dengan Nilai B " << endl;
} else { cout << " Nilai A tidak sama dengan nilai B " << endl;
}

if (a < b) {
cout << " Nilai A lebih Kecil dari Nilai B " << endl;
} else { cout << " Nilai A Tidak lebih Kecil dari Nilai B " << endl;
}

if (a > b) {
cout << " Nilai A lebih Besar dari Nilai B " << endl;
} else { cout << " Nilai A Tidak lebih Besar dari Nilai B " << endl;
}

/* Ganti Nilai A dan Nilai B*/

    //Kamus
    a = 5; //Konstanta
    b = 20; //Konstanta
    
if (a <= b) {
cout << " Nilai A Kurang dari Nilai B " << endl;
} 

if (b >= a) {
cout << " Nilai B Lebih Besar dari Nilai A " << endl;
} 

return 0;
}