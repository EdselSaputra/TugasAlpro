#include <iostream>
using namespace std;

typedef struct luas{
    float phi = 3.14;
    int luaspersegipanjang(int p, int l){
        return p*l;
    }
    float luaslingkaran(int r){
        return (22 * r * r) / 7;
    }
    float volkerucut(int r, int t){
        return (1 * phi * r * r * t) / 3;
    }
    float volumebola(int r){
        return (4 * phi * r * r * r) / 3;
    }
};

struct luas hitung1;
int main(){
    cout << hitung1.luaspersegipanjang(10,5) << endl;
    cout << hitung1.luaslingkaran(5) << endl;
    cout << hitung1.volkerucut(3,4) << endl;
    cout << hitung1.volumebola(4) << endl;
}