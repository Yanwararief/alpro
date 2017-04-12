#include <iostream>  

using namespace std;  

int main(){  
    //Kamus
	int max,n,i,min;  
	int array[100]; //variabel array bertipe integer yg berisi 100 array
	
    //Input Nilai terhadap array
	cout << "Masukan Banyak Array : "; 
	cin >> n;
	
    //Pengulangan Inputan pada jumlah array yg di input sebelumnya
	for (i = 0; i < n ;i++){ 
		cout << "Masukan nilai Array ke " << i+1 << " : ";
		cin >> array[i];  
	}  
	
    //Mencari Nilai Max dan Min
	max = array[0];	//Insialisasi
    
    //Scaning Pengulangan Besaran Nilai Array
	for(i = 1; i < n; i++){ 
		if(max < array[i]){ max = array[i]; } //Memasukan Hasil Scaning Nilai Max pada Array 
		if(min > array[i]){ min = array[i]; } //Memasukan Hasil Scaning Nilai Min pada Array
	}
    
    //Menampilkan Hasil
    cout << "-------------------------------------" << endl;
	cout << "Nilai Max : " << max << endl;	
	cout << "Nilai Min : " << min << endl;  
	
}