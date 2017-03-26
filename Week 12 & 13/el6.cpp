#include<iostream>
//I.S E-Learning I Polymorphism
//F.S Mengenal tetang Konsep OOP Polymorphism
using namespace std;

// Polymorphism adalah pemanggilan ke turunan fungsi yang menyebabkan fungsi akan berbeda saat dieksekusi tergantung pada jenis objek yang memanggil fungsi. 

//Class Utama/Induk Class
class Matrix {
    
   protected:
      int lebar, tinggi;
		
   public:
      Matrix(int a, int b) {
         lebar = a;
         tinggi = b;
      }
		
    
    //Pure Virtual Fungtion
      virtual int area() = 0; 
      
    //Squasi Virtual Fungtion
      //virtual int area() { 
          //Mengunakan virtual karena menghidari fungsi ini dari class utama
          //Karena fungsi ini di maksudkan untuk turunan class (Resolusi statis)
          
          //Jika tidak mengunakan virtual akan menampilkan tampilan di bawah ini
         //cout << "Ini Class Utama" << endl;
         //return 0;
      //}
};

//Class Turunan

//Turunan Class : Induk Class { Isi Class };
class Luas: public Matrix {
   public:
      Luas(int a, int b):Matrix(a, b) { }
      int area() { 
         cout << "Hasil dari Rumus Luas :" <<endl;
         return (lebar * tinggi); 
      }
};

//Turunan Class : Induk Class { Isi Class };
class Segitiga: public Matrix{
   public:
      Segitiga(int a, int b):Matrix(a, b) { }
      int area() { 
         cout << "Hasil dari Rumus Segitiga :" <<endl;
         return (lebar * tinggi / 2); 
      }
};

//Main Funsi
int main( ) {
   Matrix *mx;
   Luas ls(10,7);
   Segitiga  sg(10,5);

   // Mengambil alamat nilai Luas
   mx = &ls;
	
   // Memangil area Luas.
   mx->area();

   // Mengambil alamat nilai Segitiga
   mx = &sg;
	
   // Mengambil area Segitiga
   mx->area();
   
   return 0;
}