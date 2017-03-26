#include <iostream>
//I.S Latihan II
//F.S Metode Rekursi (Suatu Proses memangil dirinya sendiri)
using namespace std;

//Fungsi yang akan dipanggil (Rekursi)
void Rekursi(int i) {
    cout << "The number is :" << i << endl;
    i++; //Penghenti

    //Kondisi
    if (i < 10) {
        Rekursi(i);
    }
}

//Main Fungsi
int main () {
    
    //Kamus
    int i = 0; //Konstanta
    
    Rekursi(i); //Pemangilan Fungsi Rekursi di atas

    return 0;

}
    
