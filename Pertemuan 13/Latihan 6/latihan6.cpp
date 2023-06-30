#include <iostream>
using namespace std;

enum motor{honda,suzuki};
motor mtr;

int main(){
    mtr = honda;
    cout << mtr << endl;
    mtr = suzuki;
    cout << mtr << endl;
}