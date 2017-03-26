#include <iostream> 
//I.S Latihan I (Object Orientated)
//F.S Mengenal Fungsi mengunakan kelas dan Hak Akses
using namespace std;

//Fungsi Class adalah suatu data yang didalamnya berisi data

class Manusia {

    public: //scope(Hak Akses) //Kita bisa Akses dari semua class maupun turunannya
    //Data atau operasi dapat dipanggil dari luar kelas
    
        //Kamus yang berada dalam Public
        int tinggi, bb;
        string nama;
    
    private: // Hak Akses yang hanya bisa di akses oleh class yang sama
        
        // Kamus yang berada dalam private
        string pacar;
    
    protected: // Hak Akses yang hanya bisa oleh class manapun
    
        // Kamus yang berada dalam Protected
        string rahasia;
    
    //Pengisian Sebuah Fungsi pada Class  
    public :
    
    //Fungsi Makan berada di class Public
    void makan () {
    cout << "Makan" << endl;
    }
    
    //Fungsi namaPacar berada di class Public
    void namaPacar () {
    cout << "Samsul" << endl;
    }
    
    private : 
    //Fungsi Tidur berada di class Private
    void tidur () {
    cout << "Tidur" << endl;
    }
};

//Fungsi Main
int main() {
    
    //Memangil nama class <spasi> nama variabel/fungsi untuk turunan class
    Manusia ipin, upin;
    
    //Kamus Mengunakan Class pada turunan Class
    ipin.tinggi = 130;
    ipin.nama = "Layla";
    
    //Menampilkan turunan class
    cout << ipin.tinggi << endl;
    cout << ipin.nama << endl;
    
    //Kamus Mengunakan Class pada turunan Class
    upin.tinggi = 153;
    upin.nama = "Risma";
    
    //Menampilkan turunan class
    cout << upin.tinggi << endl;
    cout << upin.nama << endl;
    
    //Memangil langsung dari class
    upin.makan();
    ipin.namaPacar();
    
    return 0;
}