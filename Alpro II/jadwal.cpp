#include<iostream>

using namespace std;

int garis();
//Fungsi typedef struct mengelompokan beberapa variabel beserta tipe datanya menjadi satu class
typedef struct { string tgl, bulan, tahun; } tanggal;
typedef struct { int jam, menit, detik; } waktu;

//class dari Typedef juga bisa digunakan menjadi tipe data, atapun di dalam typedef bisa terdapat class di dalam class 
typedef struct { 
    int no_ka; //<----- ElementClass
    string k_asal, k_tujuan;
    waktu w_berangkat, w_tiba; //tipe data ini diambil dari class waktu diatas
    tanggal t_berangkat, t_tiba; //tipe data ini diambil dari class tanggal diatas 
    } jadwal; //class jadwal yang berisi class waktu, tanggal.  
    
int main () {

//Pemangilan class <spasi> nama inisial kelas, exx. KeretaApi
jadwal KeretaApi;

//Kamus
    //InisialClass.ElementClass
KeretaApi.no_ka = 1;
KeretaApi.k_asal = "Semarang";
KeretaApi.w_berangkat.jam = 14;
KeretaApi.w_berangkat.menit = 35;
KeretaApi.w_berangkat.detik = 24;
KeretaApi.t_berangkat.tgl = "Rabu, 12";
KeretaApi.t_berangkat.bulan = "April";
KeretaApi.t_berangkat.tahun = "2017";
KeretaApi.k_tujuan = "Bandung";
KeretaApi.w_tiba.jam = 22;
KeretaApi.w_tiba.menit = 40;
KeretaApi.w_tiba.detik = 11;
KeretaApi.t_tiba.tgl = "Rabu, 12";
KeretaApi.t_tiba.bulan = "April";
KeretaApi.t_tiba.tahun = "2017";
    
//Menampilkan Data Keberangkatan
    cout << "------------------JADWAL KERETA API INDONESIA------------------" << endl;
cout << "No Kereta Api = " << KeretaApi.no_ka << endl; 
    garis();
cout << "Keberangkatan Kereta Api = " << KeretaApi.k_asal << endl;
cout << "Waktu Keberangkatan = " << KeretaApi.w_berangkat.jam << ":" << KeretaApi.w_berangkat.menit << ":" << KeretaApi.w_berangkat.detik << endl;
cout << "Tanggal Keberangkatan = " << KeretaApi.t_berangkat.tgl << " " << KeretaApi.t_berangkat.bulan << " " << KeretaApi.t_berangkat.tahun << endl;
garis();
//Menampilkan Data Tiba
cout << "Tujuan Kereta Api = " << KeretaApi.k_tujuan << endl;
cout << "Waktu Tiba = " << KeretaApi.w_tiba.jam << ":" << KeretaApi.w_tiba.menit << ":" << KeretaApi.w_tiba.detik << endl;
cout << "Tanggal Tiba = " << KeretaApi.t_tiba.tgl << " " << KeretaApi.t_tiba.bulan << " " << KeretaApi.t_tiba.tahun << endl;
garis();
return 0;
}

int garis() {
    cout << "---------------------------------------------------------------" << endl;
}