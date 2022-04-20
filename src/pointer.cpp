#include <iostream>
using namespace std;

int main() {
    string var1 = "Belajar Pointer di C++";
    string &var2 = var1; 

    cout << var1 << endl;
    cout << var2 << endl;

    var2 = "Implementasi Pointer C++";
    cout << var1 << endl;
    cout << var2 << endl;

    cout<< endl;

    cout << &var1 << endl;
    cout << &var2 << endl;

    /* var1 dan var2 merujuk ke alamat memory yang sama
       maka ketika di print hasil keduanya akan sama
       jika salah satu nilai var diubah maka akan merubah kedua
    */
    return 0;
}