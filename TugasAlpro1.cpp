#include <iostream>
using namespace std;

/*
    Nama    : Edsel Rivenda Saputra
    NIM     : A11.2022.14305
    Matkul  : Algoritma Dan Pemrograman
    Kelompok: 4207
    Tugas 1
*/


void intro(){
    cout << "Program Menentukan Fungsi Pertambahan,Pengurangan,Perkalian dan Jumlah Total Array";
}
//1. Penambahan
int tambah(int a, int b){
    int plus = a + b;
    return plus;
}
//2. Pengurangan
int kurang(int a, int b){
    int min = a - b;
    return min;
}
//3. Perkalian
int kali(int a, int b){
    int times = a * b;
    return times;
}
//4. Total
int total(int array[], int hasil){
    float total;
    for(int i = 0; i < hasil; i++){
        total = array[i] + total; 
    }
    return total;
}
//5. Rata-Rata
float rata(int array[], int hasil){
    float total = 0;
    float rataTotal = 0;
    for(int i = 0;i < hasil; i++){
        total = array[i] + total;
    }
    rataTotal = total / hasil;
    return rataTotal;
}

int main(){
    intro();
    int x,y,elm = 3;

    cout << "=================================" << endl;
    cout << "Program Fungsi Operasi Matematika" << endl;
    cout << "=================================" << endl;
    cout << "Masukkan X : ";
    cin >> x;
    cout << "Masukkan Y: ";
    cin >> y;
    cout << "Hasil Penjumlahan dari " << x << "+" << y << '=' << tambah(x,y) << endl;
    cout << "Hasil Pengurangan dari " << x << "-" << y << '=' << kurang(x,y) << endl;
    cout << "Hasil Perkalian dari " << x << "x" << y << '=' << kali(x,y) << endl;

    cout << "=================================" << endl;
    cout << "Program Total Dan Rata-Rata Dari Sebuah Array" << endl;
    cout << "=================================" << endl;


    cout << "Masukkan Jumlah Array = ";
    cin >> elm;
    int array[elm];

    for(int j=0; j < elm; j++){
        cout << "Masukkan Bilangan ke - " << j+1 << " : ";
        cin >> array[j];
    }
    cout << "Jumlah Total dari Elemen Array : " << total(array, elm) <<"\n";
    cout << "Rata-Rata dari Elemen Array :  " << rata(array, elm) << "\n";
}
