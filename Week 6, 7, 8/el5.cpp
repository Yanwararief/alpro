#include <iostream>

//I.S Aplikasi Sederhana Pengulangan (Nested Do While)
//F.S Menampilkan hasil proses perbandingan fungsi nested Do While

using namespace std;

int main ()
{
    //Kamus
   int x = 0;
   
   do
   {
       int y = 0;
       do
       {
           cout << "Nilai x " << x << " di Y = " << y << endl;
           y++;
       }while(y < 2);

       x++;       
       
   }while(x < 2);
   
   return 0;
}