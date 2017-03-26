#include <iostream>
#include "lib.h" //Memangil file lib.h (h itu kita panggil sebagai header)

//I.S Membuat Aplikasi dengan 3 File
//F.S Menampilkan Hasil dari Fungsi Call by Value

using namespace std;

int main () {

    // Kamus
        int a = 100;
        int b = 200;
        
    // Sebelum menampilkan hasil call by value
    
    cout << "Before swap, value is A : " << a <<endl;
    cout << "Before swap, value is B : " << b <<endl;
    
    //Pemangilan Fungsi Swap di include "lib.h"
    
    swap (a,b);
    
    //Menampilkan Hasil Call by Value
    cout << "After swap, value is A : " << a <<endl;
    cout << "After swap, value is B : " << b <<endl;
    
    return 0;
}
