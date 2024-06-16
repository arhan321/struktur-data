#include <iostream>
#include <string>
using namespace std;

// Di bagian ini kita definisikan struktur data mahasiswa
struct Mahasiswa {
    string nama;
    string nim;
    double nilai;
};

// Gunakan fungsi untuk mencari data berdasarkan NIM
Mahasiswa cariMahasiswa(Mahasiswa dataMahasiswa[], int jumlahMahasiswa, string nimCari) {
    for (int i = 0; i < jumlahMahasiswa; ++i) {
        if (dataMahasiswa[i].nim == nimCari) {
            return dataMahasiswa[i];
        }
    }
    // Jika tidak ditemukan, kembalikan data kosong
    Mahasiswa kosong;
    kosong.nama = "Tidak ditemukan";
    return kosong;
}

int main() {
    const int JUMLAH_MAHASISWA = 5; // Ubah sesuai jumlah mahasiswa yang ingin dimasukkan
    Mahasiswa dataMahasiswa[JUMLAH_MAHASISWA];

    // Kita Isi Data-data mahasiswa 
    dataMahasiswa[0] = {"Guntur Rivaldi", "20220803015", 95.5};
    dataMahasiswa[1] = {"Andrue Reyhan Piercel Lionard", "20220803022", 90.0};
    dataMahasiswa[2] = {"Rafael Luberto Sinaga", "20220803054", 92.3};
    dataMahasiswa[3] = {"Ardra Rianisa", "20220803062", 91.2};
    dataMahasiswa[4] = {"Deswita Anggraini", "20220803044", 93.4};
    
    // Kita tampilkan data mahasiswa
    cout << "DATA MAHASISWA KELOMPOK 3" << endl;
    cout << "-------------------" << endl;
    for (int i = 0; i < JUMLAH_MAHASISWA; ++i) {
        cout << "Nama    : " << dataMahasiswa[i].nama << endl;
        cout << "NIM     : " << dataMahasiswa[i].nim << endl;
        cout << "Nilai   : " << dataMahasiswa[i].nilai << endl;
        cout << endl;
    }

    // Cari mahasiswa berdasarkan NIM
    string nimCari;
    cout << "Masukkan NIM yang ingin dicari: ";
    getline(cin, nimCari);
    Mahasiswa hasilPencarian = cariMahasiswa(dataMahasiswa, JUMLAH_MAHASISWA, nimCari);
    cout << "Hasil pencarian berdasarkan NIM " << nimCari << ":" << endl;
    cout << "Nama    : " << hasilPencarian.nama << endl;
    cout << "Nilai   : " << hasilPencarian.nilai << endl;
    
    // Hitung rata-rata nilai seluruh mahasiswa di kelompok 3
    float totalNilai = 0;
    for (int i = 0; i < JUMLAH_MAHASISWA; ++i) {
        totalNilai += dataMahasiswa[i].nilai;
    }
    float rataNilai = totalNilai / JUMLAH_MAHASISWA;
    cout << "Rata-rata nilai seluruh mahasiswa: " << rataNilai << endl;

    return 0;
}