#include <iostream>

//I.S Aplikasi Sederhana Pemilihan Hero Game (Nested Switch)
//F.S Menampilkan hasil proses fungsi nested switch

using namespace std;

int main () {
    
    //Kamus ;
    int pilih, a, b;
    
 cout << "--------------Pilih Hero--------------" << endl;
 cout << "\t 1. Human" << endl;
 cout << "\t 2. Monster" << endl;
 cout << "--------------------------------------" << endl;
 cout << "Masukan Angka Pilihan :";
 cin >> pilih;
 cout << "--------------------------------------" << endl;
 
 
   switch(pilih) {
    
           // Jika Mmemilih Hero Human
      case 1: 
         cout << "Tipe Hero Human Yang Anda Pilih :" << endl << endl;
         cout << "\t1. Attacker" << endl;
         cout << "\t2. Range" << endl;
         cout << "\t3. Support" << endl;
         
         cout << "--------------------------------------" << endl;
         cout << "Masukan Angka Pilihan :";
         cin >> a;
         cout << "--------------------------------------" << endl;  
           
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
         cout << "--------------------------------------" << endl;
         cout << "Masukan Angka Pilihan :";
         cin >> b;
         cout << "--------------------------------------" << endl;
         
           
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
	
   return 0;
}