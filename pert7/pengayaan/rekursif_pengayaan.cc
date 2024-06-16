#include <iostream>
using namespace std;

// Deklarasi fungsi untuk menghitung faktorial
int factorial(int n) {
    // Kondisi penghentian atau base case: jika n adalah 0 atau 1, maka faktorialnya adalah 1
    if (n == 0 || n == 1) {
        return 1;
    } else {
        // Jika n bukan 0 atau 1, maka fungsi akan memanggil dirinya sendiri dengan n - 1 dan mengalikan hasilnya dengan n
        return n * factorial(n - 1);
    }
}

int main() {
    // Nilai yang akan dihitung faktorialnya
    int n;

    // Meminta pengguna untuk memasukkan nilai untuk dihitung faktorialnya
    cout << "Masukkan nilai untuk dihitung faktorialnya: ";
    cin >> n;

    // Memanggil fungsi factorial untuk menghitung faktorial dari n
    cout << "Faktorial dari " << n << " adalah: " << factorial(n) << endl;
    return 0;
}
