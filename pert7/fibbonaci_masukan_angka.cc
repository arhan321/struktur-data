#include <iostream>
using namespace std;

// ini adalah program fibbonaci untuk masukan angka
// Deklarasi fungsi untuk menghitung bilangan Fibonacci ke-n
int fibonacci(int n) {
    // Kondisi penghentian atau base case: jika n adalah 0 atau 1, maka nilai Fibonacci-nya adalah n
    if (n <= 1) {
        return n;
    } else {
        // Jika n lebih besar dari 1, maka fungsi akan memanggil dirinya sendiri dengan n - 1 dan n - 2
        // Kemudian mengembalikan jumlah dari kedua nilai tersebut
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;
    cout << "Masukkan jumlah bilangan Fibonacci yang ingin dihitung: ";
    cin >> n;
    
    // Menampilkan deret Fibonacci dari 0 hingga n
    cout << "Deret Fibonacci dari 0 hingga " << n << ":" << endl;
    for (int i = 0; i <= n; ++i) {
        cout << "Fibonacci(" << i << ") = " << fibonacci(i) << endl;
    }
    return 0;
}




