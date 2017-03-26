#include <iostream>
//I.S E-Learning II Enkapsulasi
//F.S Mengenal tetang Konsep OOP Enkapsulasi
using namespace std;

//Enkapsulasi adalah proses atau cara menyembunyikan informasi dari suatu class program, enkapsulasi akan melindungi program dari intervensi dari program lain yang dapat mempengaruhinya. hal ini sangat membantu untuk menjaga keutuhan program.

//Class Utama
class Adder{
   public:
      // Konstrutor
      Adder(int i = 0) {
         total = i;
      }
		
      // Mengambil Jumlah data pada sebuah variabel ex. tambah 
      void tambah(int nilai) {
          
          //Nama variabel total dari variabel tambah (+) adalah mengambil seluruh data pada variabel nilai 
         total += nilai;
      }
		
      // Mengambil jumlah seluruh data pata sebuah variabel
      int getTotal() {
         return total;
      };
		
   private:
      // Kamus berikut tidak bisa ditampilkan/ di rahasiakan
      int total;
};

int main( ) {
   Adder a; //Pendefinisian class kepada turunan class
   
   a.tambah(1120);
   a.tambah(224);
   a.tambah(53);

    //Menampilkan hasil jumlah seluruh data pada vaiabel tambah
   cout << "Total " << a.getTotal() <<endl;
   return 0;
}