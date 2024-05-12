#include <iostream>
using namespace std;

int main() {
    int input;
    bool result;

    cout << "Masukkan angka (1 atau 2), jika 1 true jika 2 false: ";
    cin >> input;

    result = (input == 1);

    cout << boolalpha; 
    cout << "Nilai boolean: " << result << endl;

    return 0;
}



