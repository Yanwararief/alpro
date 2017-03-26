#include <iostream>
//I.S E-Learning III Contstuctor
//F.S Mengenal tetang Konsep OOP Constuctor
using namespace std;

class Line {
   public:
      void setLength(double len);
      double getLength(void);
      Line(double len);  // Fungsi Constuctor
 
   private:
      double length;
};
 
//Turunan class yang mengunakan constructor
Line::Line(double len) {
   cout << "Objek di buat oleh konstrutor, Panjang = " << len << endl;
   length = len;
}
 
//Mengambil nilai panjang
void Line::setLength(double len) {
   length = len;
}

//Mendeklarasikan total nilai panjang
double Line::getLength( void ) {
   return length;
}

//Fungsi Main
int main( ) {
   Line line(137.2);
 
   // Menampilkan hasil Nilai Panjang line mengunakan konstruktor
   cout << "Panjang dari line konstruktor : " << line.getLength() <<endl;
	
   // Menampilkan hasil Nilai Panjang secara langsung 
   line.setLength(3.44); 
   cout << "Panjang dari line secara langsung : " << line.getLength() <<endl;
 
   return 0;
}