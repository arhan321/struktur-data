#include <iostream>
#include <algorithm>

using namespace std;

// Fungsi untuk menampilkan nilai-nilai dalam array
void tampilkanArray(int* arr, int size) {
    cout << "Nilai dalam array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Fungsi untuk menghitung jumlah total nilai dalam array
int hitungTotal(int* arr, int size) {
    int total = 0;
    for (int i = 0; i < size; ++i) {
        total += arr[i];
    }
    return total;
}

// Fungsi untuk mencari nilai maksimum dalam array
int cariMax(int* arr, int size) {
    int max = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Fungsi untuk mencari nilai minimum dalam array
int cariMin(int* arr, int size) {
    int min = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

// Fungsi untuk mengurutkan array secara ascending menggunakan pointer
void urutAscending(int* arr, int size) {
    sort(arr, arr + size);
}

// Fungsi untuk mengurutkan array secara descending menggunakan pointer
void urutDescending(int* arr, int size) {
    sort(arr, arr + size, greater<int>());
}

int main() {
    const int size = 5;
    int arr[size] = {5, 2, 7, 1, 9};

    // Menampilkan nilai-nilai dalam array
    tampilkanArray(arr, size);

    // Menghitung total nilai dalam array
    int total = hitungTotal(arr, size);
    cout << "Total nilai dalam array: " << total << endl;

    // Mencari nilai maksimum dalam array
    int max = cariMax(arr, size);
    cout << "Nilai maksimum dalam array: " << max << endl;

    // Mencari nilai minimum dalam array
    int min = cariMin(arr, size);
    cout << "Nilai minimum dalam array: " << min << endl;

    // Mengurutkan array secara ascending
    urutAscending(arr, size);
    cout << "Array setelah diurutkan secara ascending: ";
    tampilkanArray(arr, size);

    // Mengurutkan array secara descending
    urutDescending(arr, size);
    cout << "Array setelah diurutkan secara descending: ";
    tampilkanArray(arr, size);

    return 0;
}
