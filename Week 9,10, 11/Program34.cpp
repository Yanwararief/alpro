#include <iostream>
//I.S Latihan I
//F.S Pemangilan Pointer dengan Increment
using namespace std;

int main () { 
    
int var = 10;
int *p = &var; //Pointer (*) untuk menampung alamat Memory var = 10

cout << p << endl ; //Menampilkan Alamat Nilai P 

cout << p++ << endl ; //Menampilkan Alamat Nilai P Selanjutnya
    
cout << p++ << endl ; //Menampilkan Alamat Nilai P Selanjutnya
    
cout << p++ << endl ; //Menampilkan Alamat Nilai P Selanjutnya

cout << p++ << endl ; //Menampilkan Alamat Nilai P Selanjutnya
 
return 0;
    
}