#include <iostream>
//I.S Contoh Aplikasi Mengunakan Class
//F.S Menampilkan Proses aplikasi mengunakan class

using namespace std;

//Class <spasi> Akses Class {public : Overloading}

class printData {
public:

//Menampilkan jenis data interger
void print(int i) {
    cout << "Printing int : " << i << endl; }

//Menampilkan jenis data float
void print(double f) {
    cout << "Printing float : " << f << endl; }

//Menampilkan jenis data character
void print(string c) {
    cout << "Printing Character : " << c << endl; }
    
};

//Fungsi Main void
int main (void) {
    //Akses Class <spasi> definisi Objek Class
printData pd;

//Objek Class.print
pd.print (5);
pd.print (500.263);
pd.print ("Hello C++");
return 0;
}

