#include <iostream>

//I.S Aplikasi Sederhana Pengulangan (Nested While)
//F.S Menampilkan hasil proses perbandingan fungsi nested While

using namespace std;
 
int main () {
    
    //Kamus
   int x = 0;
   
    //Fungsi While
   while(x < 3)
   {
       //Kamus
       int y = 0;
       
       //Fungsi Nested While
       while(y < 5)
       {
           //Menampilkan hasil perbandingan
           cout << "Nilai x = " << x << " di y = " << y << endl;
           y++;
       }
       x++;       
   }
   return 0;
}