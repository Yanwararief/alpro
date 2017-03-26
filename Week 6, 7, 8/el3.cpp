#include <iostream>

//I.S Aplikasi Sederhana Pengulangan (Nested For)
//F.S Menampilkan hasil proses fungsi nested for

using namespace std;

int main() {
    
    // Kamus
    int x, y;
    
    cout << "Pengulangan Berulang" << endl;
    
    //Fungsi Nested For
    for(x = 1; x <= 5; x++) { for(y = 1; y < x; y++) { cout << y; }
    
    //Menampilkan Hasil Nested For 
        cout << x << endl;
        
        
    }
    
    
    return 0;
}
