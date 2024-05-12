#include <iostream>
using namespace std;

int main() {
    int levelChoice;

    cout << "Pilih level:"<<endl;
    cout << "1. Beginner"<<endl;
    cout << "2. Medium"<<endl;
    cout << "3. Expert"<<endl;
    cout << "Masukkan pilihan level yang anda mau (1-3): ";
    cin >> levelChoice;

    if (levelChoice == 1) {
        cout << "Anda memilih level Beginner."<<endl;
    } else if (levelChoice == 2) {
        cout << "Anda memilih level Medium."<<endl;
    } else if (levelChoice == 3) {
        cout << "Anda memilih level Expert."<<endl;
    } else {
        cout << "Pilihan tidak valid."<<endl;
    }

    return 0;
}
