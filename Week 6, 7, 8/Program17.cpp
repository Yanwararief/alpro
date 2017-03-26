#include <iostream>
// I.S Latihan I (Program IF Statment)
// F.S Menampilkan proses IF Statment

using namespace std;

int main () {
    
    //Kamus
int a ;
cout << "Masukan Nilai A :";
cin >> a; //Perintah memasukan Nilai A
cout << endl;

// If Else Statmen 
if (a == 1) { cout << "Angka 1;" << endl; }
else if (a == 2) { cout << "Angka 2;" << endl; }
else if (a == 3) { cout << "Angka 3;" << endl; }
else if (a == 4) { cout << "Angka 4;" << endl; }
else if (a == 5) { cout << "Angka 5;" << endl; }
else { cout << "Angka Tidak Terdefinisi;" << endl; }
 
return 0;
}