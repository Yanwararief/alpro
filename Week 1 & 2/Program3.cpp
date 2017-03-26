#include <iostream> // library standar yang digunakan untuk input dan output
//I.S Program Sederhana III (Menyisipkan Data)
//F.S Menampilkan sebauh text di dalam program dengan cara di panggil

using namespace std;

int main( ) {

   char name[50]; 
   // Jenis data (=) Variabel data[Ukuran Data]
   
   cout << "Please enter your name: "; // Menampilkan Please enter your name: 
   cin >> name; // cin (input) adalah syntax untuk menyisipkan data terhadap variabel data yang dituju ex. (name)
   
   cout << "Your name is: " << name << endl;
   // Output (Menampilkan) << " ISI " << name (Memangil variabel name) << endl (baris baru)
    
    return 0; // Mengakhiri Program
}
