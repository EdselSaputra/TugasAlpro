#include <iostream>
using namespace std;

struct sepeda{
    char merk(){
        cout << "Polygon" << endl;
    }
    char type(){
        cout << "Sepeda Gunung" << endl;
    }
    char tahun(){
        cout << "2013" << endl;
    }
    char harga(){
        cout << "2.000.000" << endl;
    }
};

int main(){
    sepeda spd;
    sepeda *sepd;
    sepd = &spd;
    
    cout << spd.merk() << endl;
    cout << spd.type() << endl;
    cout << spd.tahun() << endl;
    cout << spd.harga() << endl;
}