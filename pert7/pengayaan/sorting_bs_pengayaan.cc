#include <iostream>

using namespace std;

// Fungsi untuk menukar dua elemen
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Fungsi untuk mengurutkan array menggunakan Bubble Sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    int n;

    // Meminta pengguna untuk memasukkan panjang array
    cout << "Masukkan panjang array: ";
    cin >> n;

    int arr[n];

    // Meminta pengguna untuk memasukkan elemen-elemen array
    cout << "Masukkan elemen-elemen array:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Elemen ke-" << i + 1 << ": ";
        cin >> arr[i];
    }

    // Mengurutkan array menggunakan Bubble Sort
    bubbleSort(arr, n);

    // Mencetak array yang sudah diurutkan
    cout << "\nArray setelah diurutkan:\n";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
