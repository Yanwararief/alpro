#include <iostream>

//I.S Aplikasi Pengelompokan/Pendaftaran Jurusan (Nested IF)
//F.S Menampilkan Hasil Pendaftaran berdasarkan Nilai UN

using namespace std;

int main() {

    //Kamus
char nama[20];
int jurusan, nilai;

cout << "------------Pendaftaran Online------------" << endl;
cout << "Masukan Nama Anda "<< endl ;
cout << "Nama Anda \t: "; 
cin >> nama; 
cout << endl;

cout << "------------------------------------------" << endl;
cout << "Pilihan Jurusan :"<< endl << endl;
cout << "\t 1. TKJ" << endl;
cout << "\t 2. RPL" << endl;
cout << "\t 3. AGRONOMI" << endl;
cout << "------------------------------------------" << endl;
cout << "Masukkan pilihan : ";
cin >> jurusan;
cout << "------------------------------------------" << endl;
cout << "Rata"" Nilai UN \t : "; 
cin >> nilai;
cout << endl << endl;
    
// Fungsi Nested If Statment
cout << "----------------- HASIL ------------------" << endl;

// Format Fungsi :
// Stament Jurusan (Kondisi) { Statment Nilai (Kondisi) { Aksi Jika Benar } else {Aksi Jika Salah}}

// Stanment Jurusan (Kondisi) {
if(jurusan == 1) {
    
    //Statment Nilai (Kondisi) 
    if(nilai >= 80)
        
        //{Aksi Jika Benar}
       { cout << "****** Anda Di Terima Jurusan TKJ ******" << endl; }
    else
        //{Aksi Jika Salah}
       { cout << "Maaf, nilai anda belum memenuhi syarat" << endl; } }
    
else if(jurusan==2) {
    if(nilai>=75)
       { cout << "****** Anda Di Terima Jurusan RPL ******" << endl; }
    else
       { cout << "Maaf, nilai anda belum memenuhi syarat"<<endl; } }

else if(jurusan==3) {
    if(nilai>=60)
       { cout << "****** Anda Di Terima Jurusan AGRONOMI ******" << endl; }
    else
       { cout << "Maaf, nilai anda belum memenuhi syarat"<<endl; } }

cout << "------------------------------------------" << endl;

return 0;
} 