#include <iostream>

// I.S Latihan VIII (Program Metode Goto)
// F.S Menampilkan proses pengembalian Fungsi metode goto

using namespace std;

int main (){
    // Kamus
int a = 0;
    
    // Fungsi Goto Statmen
    // Variabel (contoh : Start) : (Aksi) if (Kondisi) goto start
start :
    
    //Aksi
cout << "\n" << ++a ;
    
    //If (Kondisi)
if (a < 50)
    
    // goto (Pengembalian) ke variabel (Start)
    // Terus di kembalikan hingga nilai kondisi terpenuhi
    
goto start;

}



