#include <iostream>
using namespace std;

// Fungsi untuk menukar nilai dua variabel integer menggunakan pointer
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    // Meminta input dari pengguna
    cout << "Masukkan nilai x: ";
    cin >> x;
    cout << "Masukkan nilai y: ";
    cin >> y;

    // Menukar nilai x dan y menggunakan fungsi swap
    swap(&x, &y);

    // Mencetak nilai x dan y setelah ditukar
    cout << "Setelah ditukar, nilai x: " << x << " dan y: " << y << endl;

    return 0;
}
