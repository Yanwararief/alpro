#include <iostream>

// I.S Program Aritmatika
// F.S Menampilkan Hasil Aritmatika dengan bilangan konstatnta

using namespace std;

int main() {
    
    //Kamus
    
    int c;
    
    //Konstanta
    int a = 21;
    int b = 10;
    
    // Penambahan
    c = a + b;
    cout << c << endl; //Hasil
    
    // Pengurangan
    c = a - b;
    cout << c << endl; //Hasil
    
    // Perkalian
    c = a * b;
    cout << c << endl; //Hasil
    
    // Pembagian 
    c = a / b;
    cout << c << endl; //Hasil
    
    // Pembagian (Sisa)
    c = a % b;
    cout << c << endl; //Hasil
    
    // Di Tambah 1
    c = a++;
    cout << c << endl; //Hasil
    
    // Di Kurang 1
    c = a--;
    cout << c << endl; //Hasil
    
    // Akhir Program
    return (0);
}