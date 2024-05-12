#include <iostream>
#include <iomanip>

using namespace std;

struct Mahasiswa {
    string nama;
    float nilai_ujian;
    float nilai_tugas;
};

int main() {
    const int MAX_MAHASISWA = 5;
    Mahasiswa data_mahasiswa[MAX_MAHASISWA];

    // Mengisi data mahasiswa
    for (int i = 0; i < MAX_MAHASISWA; ++i) {
        cout << "Masukkan data untuk mahasiswa ke-" << i + 1 << endl;
        cout << "Nama: ";
        getline(cin, data_mahasiswa[i].nama);
        cout << "Nilai Ujian: ";
        cin >> data_mahasiswa[i].nilai_ujian;
        cout << "Nilai Tugas: ";
        cin >> data_mahasiswa[i].nilai_tugas;
        cin.ignore();
        cout << endl;
    }

    // Menampilkan seluruh data nilai mahasiswa dalam bentuk tabel
    cout << setw(10) << "No" << setw(30) << "Nama" << setw(15) << "Nilai Ujian" << setw(15) << "Nilai Tugas" << endl;
    for (int i = 0; i < MAX_MAHASISWA; ++i) {
        cout << setw(10) << i + 1 << setw(30) << data_mahasiswa[i].nama << setw(15) << data_mahasiswa[i].nilai_ujian << setw(15) << data_mahasiswa[i].nilai_tugas << endl;
    }

    // Meminta pengguna untuk memilih mahasiswa yang ingin ditampilkan
    int pilihan;
    cout << "\nMasukkan nomor mahasiswa yang ingin ditampilkan (1-5): ";
    cin >> pilihan;

    // Memeriksa apakah pilihan pengguna valid
    if (pilihan >= 1 && pilihan <= MAX_MAHASISWA) {
        // Menampilkan informasi nilai mahasiswa yang dipilih
        cout << "\nInformasi Nilai Mahasiswa yang Dipilih:" << endl;
        cout << "Nama: " << data_mahasiswa[pilihan - 1].nama << endl;
        cout << "Nilai Ujian: " << data_mahasiswa[pilihan - 1].nilai_ujian << endl;
        cout << "Nilai Tugas: " << data_mahasiswa[pilihan - 1].nilai_tugas << endl;
    } else {
        cout << "Nomor mahasiswa yang dimasukkan tidak valid." << endl;
    }

    return 0;
}