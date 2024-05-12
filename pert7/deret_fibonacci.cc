#include <iostream>
using namespace std;
// ini adalah program untuk deret fibbonaci dari 0 sampai 10
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
    // Menampilkan deret Fibonacci dari 0 hingga 10
    cout << "Deret Fibonacci dari 0 hingga 10:" << endl;
    for (int i = 0; i <= 10; ++i) {
        cout << "Fibonacci(" << i << ") = " << fibonacci(i) << endl;
    }
    return 0;
}
