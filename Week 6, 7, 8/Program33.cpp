#include<iostream>

//I.S Latihan Pointer III
//F.S Memahami fungsi Pointer (Alamat data)

using namespace std;

int dob(int *x, int *y); // Prototype Fungsi

int main () {

 int x, y; 
        
    cout << "Masukan 2 Angka (pisahkan dengan spasi ex : 1 2) : ";
    cin >> x >> y;
    
    cout << "Sebelum Melewati Fungsi Double_it" << endl;
    cout << "x \t = \t" << x << endl;
    cout << "y \t = \t" << y << endl;
    
    dob(&x, &y); //Parameter (&) Pemangilan Alamat x dan y di dalam fungsi Double It
    
    cout << "Sesudah Melewati Fungsi Double_it" << endl;
    cout << "x \t = \t" << x << endl;
    cout << "y \t = \t" << y << endl;
    
return 0;
    
}

//Fungsi Double It
int dob (int *x, int *y) { //Parameter (*) Untuk mengambil data atau mengkonversi data alamat x dan y

    *x *= 2; //Nilai Pointer x dikali 2
    *y *= 2; //Nilai Pointer y dikali 2

return 0;
}