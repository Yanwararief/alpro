#include<iostream>

//I.S Latihan Pointer II
//F.S Memahami fungsi Pointer (Alamat data)

using namespace std;

int main () {

 int a = 20; 
    
    int *p; //Pointer (*) untuk menampung alamat Memory/Variabel A
    
    p = &a; //& Mengambil Alamat Memory A
    
    cout << "Nilai dari A : ";
    cout << a << endl;
    
    cout << "Alamat Variabel A : ";
    cout << p << endl;
    
    cout << "Nilai dari *p : ";
    cout << *p << endl; // Memangil alamat p 
    
    
return 0;
    
}