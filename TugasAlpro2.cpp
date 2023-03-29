#include <iostream>
using namespace std;

/*
    Nama    : Edsel Rivenda Saputra
    NIM     : A11.2022.14305
    Matkul  : Algoritma Pemrograman
    Kelompok: A11.4207
    Tugas 2
*/

bool maxN(int a, int b){
    if (a>b){
        return true;
    }else{
        return false;
    }
}

bool minN(int a, int b){
    if (a<b){
        return true;
    }else{
        return false;
    }
}

int maxArrayNum(int A[], int n){
    int temp= A[0];
    for (int i=0; i<n; i++){
        if (A[i] > temp){
            temp = A[i];
        }
    }
    return temp;
}

int minArrayNum(int A[], int n){
    int temp= A[0];
    for (int i=0; i<n; i++){
        if (A[i] < temp){
            temp = A[i];
        }
    }
    return temp;
}

bool isFound (int a, int b[]){
    int x;
    for (int i=0; i<x; i++){
        if (b[i] == a){
            return true;
        }
    }
        return false;
}


void swapN(int a, int b){
    int temp;
    temp=a;
    a=b;
    b = temp;

    cout << "Nilai A = " << a << "Nilai B = " << b << endl;
}

bool isEven (int a, int b){
    if (a%2 == 0){
        return true;
    }else{
        return false;
    }
}

bool isOdd (int a, int b){
    int jml = a+b;
    if (jml%2 == 0){
        return false;
    }else{
        return true;
    }
}

bool isFactor(int a, int b){
    if (a%b == 0){
        return true;
    }else{
        return false;
    }
}


int main()
{

int a, b, n;

    cout << "Menentukan Bilangan yang lebih besar dan yang lebih kecil" << endl;
    cout << "Masukkan Angka 1: ";
    cin >> a;
    cout << "Masukkan Angka 2: ";
    cin >> b;
    cout << "Apakah " << a << " " << "lebih besar dari " << b << "?" << " " << maxN(a,b) << endl;
    cout << "Apakah " << a << " " << "lebih kecil dari " << b << "?" << " " << minN(a,b) << endl;
    cout << endl;

    cout << "Mencari Nilai Terbesar dan Terkecil dalam array" << endl;
    cout << "Masukkan Jumlah Array: ";
    cin >> n;
    int t[n];
    for (int i=0; i<n; i++){
        cout << "Masukkan Nilai Array ke- " << i+1 << ": ";
        cin >> t[i];
    }
    cout << "Nilai terbesar dari Array tersebut adalah " << maxArrayNum(t,n) << endl;
    cout << "Nilai terkecil dari Array tersebut adalah " << minArrayNum(t,n) << endl;

    cout << endl;
    cout << "Mencari sebuah nilai dalam array" << endl;
    int c;
    cout << "Masukkan angka yang ingin dicari dalam Array tersebut: ";
    cin >> c;
    cout << "Apakah nilai " << c << " terdapat pada array di atas? => " << isFound(c,t) << endl;
    cout << endl;

    cout << "Menentukan Genap" << endl;
   int k,l;
   cout << "Masukkan Bilangan X: ";
   cin >> k;
   cout << "Masukkan Bilangan Y: ";
   cin >> l;
   cout << "Apakah hasil penjumlahan x & y yaitu " << k + l << " merupakan bilangan genap? => " << isEven(k,l) << endl;
   cout << endl;


    cout << "Menentukan Ganjil" << endl;
   int x, y;
   cout << "Masukkan Nilai X: ";
   cin >> x;
   cout << "Masukkan Nilai Y: ";
   cin >> y;
   cout << "apakah hasil penjumlahan dari X & Y yaitu " << x + y << " merupakan bilangan ganjil? => " << isOdd(x,y) << endl;

   cout << "Menentukan bilangan Faktor" << endl;

   cout << "apakah " << x << " merupakan bilangan faktor dari " << y << "? " << isFactor(x,y) << endl;
   cout << endl;

   cout << "Pertukaran Nilai/Swap" << endl;
   cout << "Menukar nilai X dan Y: X =" << x << " & Y = " << y << endl;
   swapN(x,y);




    return 0;
}
