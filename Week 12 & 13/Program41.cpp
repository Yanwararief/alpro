#include <iostream>
//I.S Aplikasi Pengelompokan Angka 
//F.S Menampilkan Proses Pengelompokan Angka yang di input manual 
using namespace std;

//Prototype Fungsi 
void quick(int arr[], int kiri, int kanan);

int main () { 
    
    //Memasukan Nilai untuk jumlah elemen Array
    int N;
    cout << "Masukan jumlah elemen Array : ";
    cin >> N;
    
    int A[N];
    
    //Pengulangan sebuah proses sesuai jumlah elemen array yang di input diatas
    //for (Inisialisasi, Kondisi, Increment)
    
    for (int i = N; i > 0; i--) {
        
        //Memasukan nilai ke array sebanyak pengulangan di atas
        cout << "Masukan Nilai Array A ke " << i << " : ";
        cin >> A [i];
    }

    //Pemangilan Fungsi Pengelompokan
    quick(A,1,10); //Definisi variabel ex. i(1), j(10)
    cout << endl;
    
    //Pengulangan 
    for (int j = 1; j <= N; j++) {
        cout << A [j] << endl;
    }
 return 0;   
}

//Fungsi Pengelompokan
void quick(int arr[], int kiri, int kanan) {
    
    //Kamus
    int i = kiri, j = kanan; 
    int tmp;
    int pivot = arr[(kiri + kanan) / 2];
    
    //Partision (Penglompokan)
    
    //While (Nilai i kurang dari sama dengan Nilai J)
    while (i <= j) {
        
        //Statment
        
        //Jika sisi i kurang dari variabel pivot maka increment tambah nilai i
        while (arr[i] < pivot)
            i++;
        //Jika sisi J lebih dari variabel pivot maka increment kurang nilai j
        while (arr[j] > pivot)
            j--;
        
        //Jika Nilai i kurang dari sama dengan Nilai j
        if (i <= j) {
            
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
            i++; j--;
        }
    };
    
    //Rekrusi
    
    if (kiri < j)
        quick(arr,kiri,j);
    
    if (i < kanan)
        quick(arr,i,kanan);
        
}
        
