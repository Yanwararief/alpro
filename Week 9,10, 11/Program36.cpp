#include <iostream>
//I.S Latihan II
//F.S Pemangilan Pointer dengan Array/Pengulangan Statment (While) mengunakan Array
using namespace std;

int main () { 

    //Kamus
    const int MAX = 3; //Variabel Jumlah Array
    int var[MAX] = {10,100,200}; //Isi Array
    int *p; //Pointer (*) untuk menampung alamat Memory var[MAX]
    p = var;
    int i = 0;
    
    //Pengulangan
    //While(Variabel (Kondisi) Alamat var[MAX(3) - 1)
    while (p <= &var[MAX - 1]) {
        
        //Menampilkan Alamat variabel dari Array
        cout << "Address of var [" << i << "] ="; 
        cout << p << endl;
        
        //MEnampilkan Isi Variabel Array melalui Alamat
        cout << "Address of var [" << i << "] ="; 
        cout << *p << endl;
        
        //Increment Menuju ke Memory Selanjutnya
        p++;
        //Increment Menuju ke Angka Selanjutnya
        i++;
        
    }
return 0;
    
}