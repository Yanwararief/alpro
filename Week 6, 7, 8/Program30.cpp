#include<iostream>

//I.S Latihan XIV (Jenis data string)
//F.S Memahami jenis data string 

using namespace std;

int main () {
    
    //Kamus
    string str1 = "        ";
    string str2 = "Mamam";
    string str3;
    int olen;
    
    
    //Menampilkan Isi dari variable str1
    str3 = str1;
    cout << "str3 : " << str3 << endl;
    
    //Menampilkan Isi dari variable str1 dan str2
    str3 = str1 + str2;
    cout << "str1 + str2 : " << str3 << endl;
    
    //Mengetahui dan menampilkan jumlah Isi dari variable str3 (Mengunakan .size sebelum variabel)
    olen = str3.size();
    cout << "str3.size() : " << olen <<endl;
    
return 0;
    
}