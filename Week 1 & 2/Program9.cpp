#include <iostream>
// I.S Program Operator Boolean
// F.S Menampilkan Operator Logika / Boolean
 
using namespace std;

int main() { 
    
    //Kamus
	int a = 21; // Konstanta
	int b = 10;  // Konstanta
	int c;

    //Menampilkan Operator Boolean mengunakan rumus perbandingan (if)
    //if (Kondisi) {Statment Benar} else {Statment Salah}
    
    
    //AND (Logika AND ditulis dengan symbol '&&')
	if(a && b){ 
		cout << "TRUE" << endl;
	}else{
		cout << "FALSE" << endl;
	}

    //NOT (Logika NOT ditulis dengan symbol '!=')/ Tidak Sama Dengan
	if(a != b){ 
		cout << "TRUE" << endl;
	}else{
		cout << "FALSE" << endl;
	}

    
    //OR (Logika OR ditulis dengan symbol '||')
	if(a || b){ 
		cout << "TRUE" << endl;
	}else{
		cout << "FALSE" << endl;
	}
    
    return 0;
}