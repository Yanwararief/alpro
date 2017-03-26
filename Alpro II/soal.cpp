#include <iostream>
//I.S Aplikasi Menghitung rata rata IPK
//F.S Menampilkan Proses pencari IPK

using namespace std;

int main () {

    //Kamus
    float ip, total = 0, ex;
    int mahasiswa = 0, lulus = 0, tidak = 0;
    
    //Pengulangan Masukan Nilai IPK
    while (ip != -999) { 
        //Penghentian Jika Pengguna Mengetik -999
    
        if (ip >= 0 && ip <= 4) { 
            
            //Increment Nilai Mahasiswa yang tergolong ip 0 - 4
            mahasiswa++;
            
            //Mencari nilai seluruh IPK
            total += ip;
            
            
            //Pengelompokan Mahasiswa Lulus dan Tidak Lulus,
            if (ip >= 2.75) { lulus++; } else { tidak++; }
             
        } 
        
        //Input Data
            cout << "Masukan Nilai IPK = ";
            cin >> ip;

        
    }
    //Menampilkan Banyak Mahasiswa
    cout << "Banyak Mahasiswa  = " << mahasiswa << endl;
    //Menampilkan Mahasiswa Yang lulus
    cout << "Jumlah Mahasiswa yang Lulus = " << lulus << endl;
    //Menampilkan Mahasiswa yang tidak Lulus
    cout << "Jumlah Mahasiswa yang Tidak Lulus = " << tidak << endl;
    
    //Rumus MEncari nilai rata rata mahasiswa
    ex = total/mahasiswa;
    
    //Menampikan hasil rata rata
    cout << "Rata Rata IP di Kelas = " << ex ;

    return 0;
    
}