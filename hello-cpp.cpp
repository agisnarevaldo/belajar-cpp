#include <iostream>
using namespace std;
// di bawah ini deklarasi konstanta
#define nama "Muhamad Agisna Revaldo"
#define umur 19
#define panjang 10
#define lebar 4
    

int main(){

    //deklarasi variabel
    string bangunDatar;
    int luas;

    bangunDatar = "Persegi Panjang";
    luas = panjang * lebar;

    //menampilkan ke konsol atau terminal atau output
    cout << nama; cout << endl;
    cout << umur; cout <<endl;

    cout << bangunDatar;
    cout << "\n";

    cout << "luas = ";
    cout <<luas;
    cout <<endl;

    cout << "clear";

    return 0;
}
