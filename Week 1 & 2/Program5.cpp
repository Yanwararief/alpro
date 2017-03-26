#include <iostream>
#define PHI 3.14 //Konstanta bilangan (Tidak Dapat diubah)

// I.S Program Luas Linkaran
// F.S Menampilkan Data Lingkaran

using namespace std;

int main() {
    
    //Kamus
    float jari_jari, luas;
    
    // Konstanta
    jari_jari = 25;
    
    //Proses Mencari Luas
    //Rumus mencari luas : 0.5 x 3.14 x D atau 0.5 x 3.14 x r x r
    
    luas = 0.5 * PHI * jari_jari * jari_jari;
    
    //Nilai PHI diambil dari syntax baris ke 2 yakni define (konstanta bilangan)
    
    
    // Menampilkan Data Lingkaran
    cout << "Data Lingkaran";
    cout << "\nJari - Jari : " << jari_jari;
    cout << "\nLuas : " <<luas;
    cout << "\n";
    
    //Akhir Program
    return (0);
}