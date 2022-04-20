#include <iostream>
using namespace std;

int main() {
    //deklarasi variabel
    string nama;

    cout << "Who am i ? ";
    //mengambil input dan memasukan ke variabel nama
    getline(cin, nama);

    //tampilkan hasil input
    cout << "My Name is : " << nama <<endl;

    return 0;
}
