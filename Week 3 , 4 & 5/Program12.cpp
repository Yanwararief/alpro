#include <iostream>

//I.S Aplikasi Call by Reference
//F.S Menampilkan Hasil dari Fungsi Call by Reference

using namespace std;

//Prototye 

//file name = lib.h
void swap (int &x, int &y);

//file name = main.cpp
int main () {

    // Kamus
        int a = 100;
        int b = 200;
        
    // Sebelum menampilkan hasil Call by Reference
    
    cout << "Before swap, value is A : " << a <<endl;
    cout << "Before swap, value is B : " << b <<endl;
    
    //Pemangilan Fungsi Swap di bawah
    
    swap (a,b);
    
    //Menampilkan Hasil Call by Reference
    cout << "After swap, value is A : " << a <<endl;
    cout << "After swap, value is B : " << b <<endl;
    
    return 0;
}

//File name = swap.cpp
//Fungsi Swap Call by Reference mengunakan '&' didepan variabel

void swap (int &x, int &y) {

    int temp;
    
    temp = x;
    x = y;
    y = temp;
    
    return;
}