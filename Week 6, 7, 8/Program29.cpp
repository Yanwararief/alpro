#include<iostream>

//I.S Latihan XIII (Jenis data string dan char)
//F.S Memahami jenis data string char dan perbedaannya

using namespace std;

int main () {
    
    //Kamus
    string nama = "Rahmat"; //Tanpa Mengunakan Array (Langsung)
    char nama2 [] = "Rahmat"; //Mengunakan Array tidak mengunakan ukuran array 
    char nama3 [6] = {'R','A','H','M','A','T'}; // MEngunakan Array dan Ukurannya
    
    //Menampilkan Perbandingan ketiga jenis data tersebut 
    cout << nama << endl;
    cout << nama2 << endl;
    cout << nama3 [3] << endl;
    
return 0;
    
}