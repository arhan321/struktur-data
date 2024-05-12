#include <iostream>

using namespace std;

int main() {
    int number = 42; // variable number bertalian dengan 42
    int *a = &number; // Menyimpan memory dari var number ke pointer a

    // Menampilkan memory address dari variable number
    cout << "Memory address dari variable number adalah = " << &number << endl;
    // Menampilkan nilai dari variable number
    cout << "Nilai variable number: " << number << endl;
    // Menampilkan nilai dari pointer a (memory address var number)
    cout << "Nilai pointer *a: " << a << endl;
    // Mengecek apakah pointer a menyimpan memory address var number
    cout << "Mengecek nilai pointer *a berisi memory dari var number: " << *a << endl;

    // Mengubah nilai dari var number dengan mengisikan pointer a dengan angka integer lain (misal: 100)
    *a = 100;
    // Hasilnya var number nilainya berubah menjadi 100
    cout << "Value variable number setelah dimodifikasi: " << number << endl;
    // Mengakses nilai dari pointer a (yang sekarang adalah 100)
    cout << "Nilai pointer a adalah: " << *a << endl;

    return 0;
}
