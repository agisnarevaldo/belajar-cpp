#include <iostream>
using namespace std;

int main() {

        int a;

        cout << "Masukan bilangan bulat : ";
        cin >> a;

        if (a % 2 == 0){
                cout << a << " Adalah bilangan genap";
        }
        else {
                cout << a << " Adalah bilangan ganjil";
        }

        return 0;
}
