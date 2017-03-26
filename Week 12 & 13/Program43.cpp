#include <iostream>
//I.S Aplikasi Kalkulor (OOP)
//F.S Menampilkan hasil dari Aritmatematika Kalkulator mengunakan Class
using namespace std;

//Fungsi Class adalah suatu data yang didalamnya berisi data

class cal {
    
    public : //Hak Akses yang boleh di akses oleh semua class maupun turannnya
    int x,y;
    
    //Isi class cal sebagai fungsi tambah
    int tambah (int x, int y) {
        return x + y;
    }
    
    //Isi class cal sebagai fungsi kurang
    int kurang (int x, int y) {
        return x - y;
    }
    
    //Isi class cal sebagai fungsi kali
    int kali (int x, int y) {
        return x * y;
    }
    
    //Isi class cal sebagai fungsi bagi
    int bagi (int x, int y) {
        return x / y;
    }

};

int main () {
    
    //Memangil nama class <spasi> nama variabel/fungsi untuk turunan class
    cal casio;
    
    cout << "Masukan Nilai X = ";
    cin >> casio.x; //Memasukan nilai x kepada turunan class ex. casio
    
    cout << "Masukan Nilai Y = ";
    cin >> casio.y; //Memasukan nilai y kepada turunan class ex. casio
    
    cout << "Hasil Tambah X dan Y " << casio.tambah(casio.x, casio.y) << endl;
    cout << "Hasil Kurang X dan Y " << casio.kurang(casio.x, casio.y) << endl;
    cout << "Hasil Kali X dan Y " << casio.kali(casio.x, casio.y) << endl;
    cout << "Hasil Bagi X dan Y " << casio.bagi(casio.x, casio.y) << endl;

return 0;
}