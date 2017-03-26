#include <fstream> //Liblary Untuk MEnulis File
#include <iostream>

//I.S Membuat Aplikasi Stream menuju File
//F.S Menampilkan Hasil Input kepada Output file .txt

using namespace std;

int main () {

    //Kamus
    char data[100];
    
    //Buka File
    ofstream outfile;
    outfile.open("Text.txt");
    
    cout << "Writing to the file" << endl;
    cout << "Enter Your Name : ";
    cin.getline(data,100);
    
    //Tulis Data ke File
    outfile << data << endl;
    
    cout << "Enter your age : ";
    cin >> data;
    cin.ignore();
    
    //Tulis Data ke File
    outfile << data << endl;
    
    //Class File
    outfile.close();
    
    //Buka File
    ifstream infile;
    infile.open("Text.txt");
    
    cout << "Reading from the File" << endl;
    infile >> data;
    
    //Baca data dari file, lalu tampilkan
    cout << data << endl;
    infile >> data;
    cout << data << endl;
    
    //Class File
    infile.close();
    
    return 0;
}