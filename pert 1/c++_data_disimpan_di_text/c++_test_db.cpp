#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    char inputLagi;
    do {
        string nama, alamat, kontak;
        cout << "=============================================================" << endl;
        cout << "struktur data" << endl;
        cout << "Program sederhana untuk menyimpan data di dalam teks" << endl;
        cout << "=============================================================" << endl;
        cout << "Masukkan nama: ";
        getline(cin, nama);
        cout << "Masukkan alamat: ";
        getline(cin, alamat);
        cout << "Masukkan kontak: ";
        getline(cin, kontak);

        ofstream file("data.txt", ios::app);

        if (file.is_open()) {
            file << "Nama: " << nama << endl;
            file << "Alamat: " << alamat << endl;
            file << "Kontak: " << kontak << endl;
            file << "====================" << endl;
            file.close();
            cout << "=============================================================" << endl;
            cout << "Data berhasil disimpan ke dalam file." << endl;
            cout << "=============================================================" << endl;
        } else {
            cout << "Gagal membuka file untuk penulisan." << endl;
        }

        cout << "Apakah Anda ingin memasukkan data lagi? (y/n): ";
        cin >> inputLagi;
        cin.ignore(); 

    } while (inputLagi == 'y' || inputLagi == 'N');

    cout << "Program selesai." << endl;
    return 0;
}
