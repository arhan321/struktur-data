#include <iostream>
#include <string>
using namespace std;

int main() {
    string arr[3][3] = {{"satu", "dua", "tiga"}, {"empat", "lima", "enam"}, {"tujuh", "delapan", "sembilan"}};

    cout << "Isi array dua dimensi:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}