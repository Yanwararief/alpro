#include <iostream>

// I.S Program Mengetahui Ukuran Data
// F.S Menampilkan Ukuran Data

using namespace std;

int main() {
    
    //Menampilkan Ukuran Data 
    
    // User Define Type (Membuat Variabel Sendiri)
    // Syntax typedef untuk menganti variabel
    
    typedef double dua;
    
    // Syntax sizeof untuk mengetahui ukuran data
    
    cout << "Ukuran Char : " << sizeof(char) << endl;
    cout << "Ukuran Int : " << sizeof(int) << endl;
    cout << "Ukuran Short Int : " << sizeof(short int) << endl;
    cout << "Ukuran Long Int : " << sizeof(long int) << endl;
    cout << "Ukuran Float : " << sizeof(float) << endl;
    cout << "Ukuran Double : " << sizeof(dua) << endl;
    cout << "Ukuran WChar_t : " << sizeof(wchar_t) << endl;
    
    // Akhir Program
    return (0);
}