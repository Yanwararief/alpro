#include<iostream>
//I.S Konsep  Penjumlahan 2 Matrix
//F.S Proses Penjumlahan 2 Matrix
using namespace std;

int main() {
//Kamus
    int M[3][3];
    int M1[3][3];
    int M2[3][3];
    //nama_matrix[baris][kolom]
    
    //Proses Input Matrix
    //Pengulangan Baris[i]
    for (int i = 0; i < 3; i++) {
    
        //Pengulangan Kolom[j]
        for (int j = 0; j < 3; j++) {
        
        //Input Matrix Pada Matrix 1
            cout << "Masukan Nilai Matrix 1 pada Baris ke " << i << " Kolom ke " << j << " : "; 
            cin >> M1[i][j];    
            cout << "Masukan Nilai Matrix 2 pada Baris ke " << i << " Kolom ke " << j << " : "; 
            cin >> M2[i][j];    
            
        //Proses Penjumlahan 2 Matrix
        
        M[i][j] = M1[i][j] + M2[i][j];
        }
    }
    
    //Menampilkan Hasil Matrix 1
    cout << "----------MATRIX1--------" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
        
        //Menampilkan Matrix1 
            cout << "|" << M1[i][j] << "\t"; 
        }
    cout << "|" << endl;
    cout << "-------------------------" << endl;
    }
    
    cout << endl;
    
    //Menampilkan Hasil Matrix2
    cout << "----------MATRIX2--------" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
        
        //Menampilkan Matrix2 
            cout << "|" << M2[i][j] << "\t"; 
        }
    cout << "|" << endl;
    cout << "-------------------------" << endl;
    }
    
    cout << endl;
    
    //Hasil Penjumlahan Matrix
    cout << "----------MATRIX---------" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
        
        //Menampilkan Matrix 
            cout << "|" << M[i][j] << "\t"; 
        }
    cout << "|" << endl;
    cout << "-------------------------" << endl;
    }
return 0;
}