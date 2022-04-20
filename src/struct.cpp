#include <iostream>
using namespace std;

struct Mahasiswa {
  string nama;
  double ipk;
  unsigned int th_masuk;  
  string matkul;
  int nilai;
};

int main () {

    struct Mahasiswa mahasiswa1;
    mahasiswa1.nama = "Agisna Revaldo";
    mahasiswa1.ipk = 3.5;
    mahasiswa1.th_masuk = 2021;

    cout << "Mata Kuliah : ";
    getline (cin, mahasiswa1.matkul);

    cout << "Masukan Nilai : ";
    cin >> mahasiswa1.nilai;
    cout << endl;

    cout << "Nama : " << mahasiswa1.nama << endl;
    cout << "IPK  : " << mahasiswa1.ipk << endl;
    cout << "Tahun Masuk : " << mahasiswa1.th_masuk << endl;
    cout << "nilai Matakuliah " << mahasiswa1.matkul << " : " << mahasiswa1.nilai << endl;

}