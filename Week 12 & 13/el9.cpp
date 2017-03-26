#include <iostream>
//I.S E-Learning III Inheritance
//F.S Mengenal tetang Konsep OOP Inheritance
using namespace std;

//Inheritance adalah turunan atau pewarisan suatu class ke class baru dengan mewakili semua function yang ada di class utama.

//Class Utama
class Matrix  {
   public:
      void setLebar(int l) {
         Lebar = l;
      }
		
      void setTinggi(int t) {
         Tinggi = t;
      }
		
   protected:
      int Lebar;
      int Tinggi;
};

//Class Turunan
class Luas: public Matrix {
   public:
      int getArea() { 
         return (Lebar * Tinggi); 
      }
};

int main(void) {
   Luas ls;
 
   ls.setLebar(59);
   ls.setTinggi(26);

   //Menampilkan Hasil Luas.
   cout << "Luas Area : " << ls.getArea() << endl;

   return 0;
}