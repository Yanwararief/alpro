#include <iostream>

//I.S Aplikasi Sederhana Pemilihan Hero Game (Nested Switch)
//F.S Menampilkan hasil proses fungsi nested switch

using namespace std;

//Prototype
int menu ();
int opsi ();
int garis();
int input();

//Program Utama
int main () {
menu(); //Memanggil sub program menu
garis(); //Memanggil sub program garis
input(); //Memanggil sub program input
garis(); //Memanggil sub program garis
opsi(); //Memanggil sub program opsi
    
}
//Sub Program 
int garis () {
 cout << "--------------------------------------" << endl;   
}

//Sub Program 
int menu () {
//Kamus ;
 cout << "--------------Pilih Hero--------------" << endl;
 cout << "\t 1. Human" << endl;
 cout << "\t 2. Monster" << endl;
}

//Sub Program 
int input () {
int pilih;
cout << "Masukan Angka Pilihan :";
 cin >> pilih;
 }

 //Sub Program 
int opsi () {
    int pilih, a, b;
   switch(pilih) {
    
           // Jika Mmemilih Hero Human
      case 1: 
         cout << "Tipe Hero Human Yang Anda Pilih :" << endl << endl;
         cout << "\t1. Attacker" << endl;
         cout << "\t2. Range" << endl;
         cout << "\t3. Support" << endl;
         
           //Bisa juga Memanggil sub program dalam sub program
            garis(); //<---- Contoh seperti sub program garis yang berada di sub program opsi
         cout << "Masukan Angka Pilihan :";
         cin >> a;
            garis();  //Sub Program dalam Sub Program
        switch(a) 
        {
                
            case 1:
               cout << "Berikut Equip Yang anda Dapatkan pada Hero tsb." << endl;
               cout << "Equip : Pedang, Perisai, Baju Baja" << endl;
               break;
                
            case 2:
               cout << "Berikut Equip Yang anda Dapatkan pada Hero tsb." << endl;
               cout << "Equip : Pemanah, Jubah, Sepatu" << endl;
               break;
            
            case 3:
               cout << "Berikut Equip Yang anda Dapatkan pada Hero tsb." << endl;
               cout << "Equip : Tongkat Sihir, Jubah, Gelang/Jimat" << endl;
               break;
         }
           
        break; 
           
           // Jika Mmemilih Hero Monster
        case 2: 
         cout << "Tipe Hero Monster Yang Anda Pilih : "<< endl;
         cout << "\t1. Tanker" << endl;
         cout << "\t2. Marksman" << endl;
         cout << "\t3. Mage" << endl;
         garis();
           cout << "Masukan Angka Pilihan :";
         cin >> b;
         garis();
           
        switch(b) 
        {
             
            case 1:
               cout << "Berikut Equip Yang anda Dapatkan pada Hero tsb." << endl;     
               cout << "Equip : Kapak, Perisai, Baju Baja" << endl;
               break;
            
            case 2:
               cout << "Berikut Equip Yang anda Dapatkan pada Hero tsb." << endl;
               cout << "Equip : Pedang, Baju, Sepatu" << endl;
               break;
            
            case 3:
               cout << "Berikut Equip Yang anda Dapatkan pada Hero tsb." << endl;    
               cout << "Equip : Tongkat Sihir, Jubah, Jimat" << endl;
               break;
         }
   }
}