#include<iostream>
//I.S Konsep Matrix
//F.S Proses Matrix
using namespace std;

int main() {
//Kamus
    int x[3][3];
    //nama_matrix[baris][kolom]
    
    //Proses Input Matrix
    //Pengulangan Baris[i]
    for (int i = 0; i < 3; i++) {
    
        //Pengulangan Kolom[j]
        for (int j = 0; j < 3; j++) {
        
        //Input Matrix
            cout << "Masukan Nilai Matrix pada Baris ke " << i << " Kolom ke " << j << " : "; 
            cin >> x[i][j];
        }
    }
    
    
    //Menampilkan Hasil Output
    for (int i = 0; i < 3; i++) {
    
        //Pengulangan Kolom[j]
        for (int j = 0; j < 3; j++) {
        
        //Input Matrix
            cout << "Nilai Matrix pada Baris ke " << i << " Kolom ke " << j << " : "; 
            cout << x[i][j] << endl;
        }
    }
    
return 0;
}