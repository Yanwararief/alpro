#include <iostream>

//I.S Contoh Aplikasi Tidak Mengunakan Class
//F.S Menampilkan Proses aplikasi Tidak Mengunakan Class

using namespace std;

//Menampilkan jenis data interger
void print(int i) {
    cout << "Printing int : " << i << endl; }

//Menampilkan jenis data float
void print(double f) {
    cout << "Printing float : " << f << endl; }

//Menampilkan jenis data character
void print(string c) {
    cout << "Printing Character : " << c << endl; }
    

int main (void) {
print (5);
print (500.263);
print ("Hello C++");
return 0;
}
