#include <iostream>
//I.S Aplikasi kalkulator
//F.S Menampilkan hasil aritmatika dengan relasi
using namespace std;

//Prototype
int c (int a, int b);
int d (int a, int b);
int e (int a, int b);
int f (int a, int b);
int g (int a, int b);
    
    
int main () {

    // Kamus    
    int a,b ;
        
    cout << "Masukan Nilai A : ";
    cin >> a; // Input data A
    
    
    cout << "Masukan Nilai B : "; 
    cin >> b; // Input data B
    
    cout << endl; 
    
    cout << "Hasil Pertambahan A dan B adalah " << c (a, b) << endl; 

    cout << "Hasil Pengurangan A dan B adalah " << d (a, b) << endl;

    cout << "Hasil Perkalian A dan B adalah " << e (a, b) <<endl;

    cout << "Hasil Pembagian A dan B adalah " << f (a, b) <<endl;

    cout << "Hasil Sisa Pembagian A dan B adalah " << g (a, b) <<endl << endl;
    
    if( a == b ) {  cout << "A sama dengan B" << endl ;   } 
    else {   cout << "a tidak sama dengan b" << endl ;    }	   
    
    if( a != b ) {  cout << "a tidak sama dengan b" << endl ;   } 
    else {   cout << "a sama dengan b" << endl ;    }	   
    
    if( a > b ) {  cout << "a lebih besar dari b" << endl ;   } 
    else {   cout << "a lebih kecil dari b" << endl ;    }	   
    
    if( a < b ) {  cout << "a lebih kecil dari b" << endl ;   } 
    else {   cout << "a lebih besar dari b" << endl ;    }	   
    
    if( a >= b ) {  cout << "a lebih besar sama dengan dari b" << endl ;   } 
    else {   cout << "a tidak lebih besar sama dengan dari b" << endl ;    }
    
    
    if( a <= b ) {  cout << "a lebih kecil sama dengan dari b" << endl ;   } 
    else {   cout << "a tidak lebih kecil sama dengan dari b" << endl ;    }
    
  
return 0;
}

//Fungsi Aritmatika

int c (int a, int b) { return a + b; }

int d (int a, int b) { return a - b; }

int e (int a, int b) { return a * b; }

int f (int a, int b) { return a / b; } 

int g (int a, int b) { return a % b; }