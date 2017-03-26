#include <iostream>
//I.S Latihan II
//F.S Pemangilan Pointer dengan Array/Pengulangan Statment (For) mengunakan Array
using namespace std;

int main () { 

    //Kamus
    const int MAX = 3; //Variabel Jumlah Array
    int var[MAX] = {10,100,200}; //Isi Array
    int *p; //Pointer (*) untuk menampung alamat Memory var[MAX]
    
    //Alamat array ke pointer
    p = var;
    
    //Pengulangan
    //for (Inisialisasi, Kondisi, Increment)
    for (int i = 0; i < MAX; i++) {
        
        //Menampilkan Alamat Variabel dari Array
        cout << "Address of var [" << i << "] ="; 
        cout << p << endl;
        
        //Menampilkan Isi Variabel dari Array melewati Alamat
        cout << "Address of var [" << i << "] ="; 
        cout << *p << endl;
        
        //Menujuk ke Memory Selanjutnya
        p++;
        
    }
return 0;
    
}