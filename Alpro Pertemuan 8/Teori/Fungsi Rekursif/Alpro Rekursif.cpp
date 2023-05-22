#include <iostream>
using namespace std;

int faktorial(int a);
int perkalian(int a, int b);
int pertambahan(int a);
int pengurangan(int a, int b);
float pembagian(float a, float b);
int pangkat(int a, int b);
int fibonacci(int a);


int main(){
cout << "================PENJUMLAHAN================" << endl;
    int jum;
    cout << "Masukkan Angka: ";
    cin >> jum;
    int hslJum = pertambahan(jum);
    cout << "Hasil dari Penjumlahan " << jum << " adalah: " << hslJum << endl;

    cout << endl;
    cout << endl;

    cout << "================PENGURANGAN================" << endl;
    int kur1, kur2;
    cout << "Masukkan Angka pertama: ";
    cin >> kur1;
    cout << "Masukkan Angka kedua: ";
    cin >> kur2;
    int hslkur = pengurangan(kur1,kur2);
    cout << "Hasil dari Pengurangan " << kur1 << " dan " << kur2 << " adalah: " << hslkur << endl;

    cout << endl;
    cout << endl;

    cout << "================PEMBAGIAN================" << endl;
    int bagi1,bagi2;
    cout << "Masukkan Angka pertama: ";
    cin >> bagi1;
    cout << "Masukkan Angka kedua: ";
    cin >> bagi2;
    int hslbag = pembagian(bagi1,bagi2);
    cout << "Hasil dari pembagian " << bagi1 << " dan " << bagi2 << " adalah: " << hslbag << endl;

    cout << endl;
    cout << endl;

    int n;

    cout << "================FAKTORIAL================" << endl;
    cout << "Masukkan basis faktorial: ";
    cin >> n;

    int hslFak = faktorial(n);

    cout << "Hasil dari Faktorial " << n << " adalah: " << hslFak << endl;
    cout << endl;
    cout << endl;

    cout << "================PERKALIAN================" << endl;
    int a,b;
    cout << "Masukkan Angka pertama: ";
    cin >> a;
    cout << "Masukkan Angka kedua: ";
    cin >> b;
    int hslKali=perkalian(a,b);
    cout << "Hasil dari perkalian " << a << " dan " << b << " adalah: " << hslKali << endl;

    cout << endl;
    cout << endl;

    cout << "================PANGKAT================" << endl;
    int angka,pemangkat;
    cout << "Masukkan Angka: ";
    cin >> angka;
    cout << "Masukkan Angka Pangkat: ";
    cin >> pemangkat;
    int hslpang = pangkat(angka,pemangkat);
    cout << "Hasil dari " << angka << " pangkat " << pemangkat << " adalah: " << hslpang << endl;

    cout << endl;
    cout << endl;

    cout << "================FIBONACCI================" << endl;
    int fib,j=0;
    cout << "Masukkan Jmlah Angka: ";
    cin >> fib;

    cout << "Jumlah angka fibonacci: ";
    for(int i=0; i<=jum; i++){
        cout << "Fibbonacci ke-" << i << ": " << fibonacci(j) << endl;
    }

    cout << endl;
    cout << endl;
    return 0;
}


int pertambahan(int a){
    if(a == 0){
        return 0;
    }else{
        return a + pertambahan(a - 1);
    }
}

int pengurangan(int a, int b){
    if(b == 0){
        return a;
    }else{
        return pengurangan(a - 1, b - 1);
    }
}

float pembagian(float a, float b){
    if(a < b){
        return 0;
    }else{
        return 1 + pembagian(a - b, b);
    }
}
int faktorial(int a)
{
    if(a==1)
        return 1;
    else
        return a*faktorial(a-1);
}

int perkalian (int a,int b)
{
    if (b==1)
        return a;
    else
        return a+perkalian(a,b-1);
}

int pangkat(int a, int b){
    if(b == 0){
        return 1;
    }else{
        return a * pangkat(a, b - 1);
    }
}

int fibonacci(int a){
    if(a == 0|| a == 1){
        return a;
    } else {
        return fibonacci(a - 1) + fibonacci(a - 2);
    }
}