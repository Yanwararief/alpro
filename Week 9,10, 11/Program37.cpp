#include <iostream>
//I.S Latihan I
//F.S Pendeklarasiaan sebuah variabel pointer yang di tugaskan NULL
using namespace std;

int main () { 
    //Nilai P = 0
int *p = NULL; //
    
    //Null pointer adalahkonstan dengan nilai nol di definisikan
    //di beberapa perpustakaan standar

    //Menampilkan Pendeklarasian Pointer
cout << "The value of p is " << p << endl ;
    
    //Nilai Benar Jika p bukan Null 
    if (p) { cout << "Not Null" << endl; } else { cout << "Null "<< endl;}
    
    //Nilai Benar Jika P Null
    if (!p) { cout << "Null" << endl; } else { cout << "Not Null"<< endl;}
    
    return 0;
}