#include <iostream>
using namespace std;

enum MataKuliah { Struktur_data, Kalkulus1, Orakom, Organisasi_management, DSI };

struct Dosen {
    string nama_dosen;
    int NIK_dosen;
    string alamat_dosen;
    MataKuliah mengajar;
};


void isiDataDosen(Dosen &dosen) {
    cout << "Masukkan Nama Dosen: ";
    getline(cin, dosen.nama_dosen);

    cout << "Masukkan NIK Dosen: ";
    cin >> dosen.NIK_dosen;

    cin.ignore(); 
    cout << "Masukkan Alamat Dosen: ";
    getline(cin, dosen.alamat_dosen);

    cout << "Pilih Mata Kuliah yang Diajarkan (0: Struktur_data, 1: Kalkulus1, 2: Orakom, 3:Organisasi_management, 4: DSI): ";
    int pilihan;
    cin >> pilihan;
    dosen.mengajar = static_cast<MataKuliah>(pilihan);

    cin.ignore(); 
}

void tampilkanDataDosen(const Dosen &dosen) {
    string mataKuliah[] = {"Struktur_data", "Kalkulus1", "Orakom", "organisasi_management", "DSI"};

    cout << "Nama Dosen: " << dosen.nama_dosen << endl;
    cout << "NIK Dosen: " << dosen.NIK_dosen << endl;
    cout << "Alamat Dosen: " << dosen.alamat_dosen << endl;
    cout << "Mata Kuliah yang Diajarkan: " << mataKuliah[dosen.mengajar] << endl;
}

int main() {
    char lanjut;
    do {
        Dosen dosen;
        cout << "" << endl;
        cout << "====================== Mengisi data Dosen  =========================" << endl;
        isiDataDosen(dosen);

        cout << "" << endl;
        cout << "=====================  Data dosen yang sudah di isi : ========================" << endl;
        tampilkanDataDosen(dosen);

        cout << "===============================================" << endl;
        cout << "Ingin memasukkan data dosen lagi? (y/n): ";
        cin >> lanjut;

        cin.ignore(); 
    } while (lanjut == 'y' || lanjut == 'N');

    cout << "Program selesai. Terima kasih!" << endl;

    return 0;
}





#include <iostream>
#include <vector>
#include <string>

using namespace std;

enum Produk { Buku, PeralatanElektronik, Baju, Makanan, PerlengkapanRumah };

struct Barang {
    string namaBarang;
    int kodeBarang;
    string jenisBarang;
    vector<Produk> kategoriBarang;
    float hargaBarang;
};

void isiDataBarang(Barang &barang) {
    cout << "Masukkan Nama Barang: ";
    getline(cin, barang.namaBarang);

    cout << "Masukkan Kode Barang: ";
    cin >> barang.kodeBarang;

    cin.ignore();
    cout << "Masukkan Jenis Barang: ";
    getline(cin, barang.jenisBarang);

    cout << "Masukkan jumlah kategori barang: ";
    int jumlahKategoriBarang;
    cin >> jumlahKategoriBarang;

    cin.ignore();
    for (int i = 0; i < jumlahKategoriBarang; ++i) {
        int pilihanKategoriBarang;
        cout << "Pilih kategori barang (0: Buku, 1: PeralatanElektronik, 2: Baju, 3: Makanan, 4: PerlengkapanRumah): ";
        cin >> pilihanKategoriBarang;

        barang.kategoriBarang.push_back(static_cast<Produk>(pilihanKategoriBarang));
        cin.ignore();
    }

    cout << "Masukkan Harga Barang: ";
    cin >> barang.hargaBarang;
}

void tampilkanDataBarang(const Barang &barang) {
    string kategoriBarangStr[] = {"Buku", "PeralatanElektronik", "Baju", "Makanan", "PerlengkapanRumah"};

    cout << "Nama Barang: " << barang.namaBarang << endl;
    cout << "Kode Barang: " << barang.kodeBarang << endl;
    cout << "Jenis Barang: " << barang.jenisBarang << endl;
    cout << "Kategori Barang: ";

    for (int i = 0; i < barang.kategoriBarang.size(); ++i) {
        cout << kategoriBarangStr[barang.kategoriBarang[i]];
        if (i < barang.kategoriBarang.size() - 1) {
            cout << ", ";
        }
    }
    cout << endl;
    cout << "Harga Barang: " << barang.hargaBarang << endl;
}

int main() {
    char lanjut;
    do {
        Barang barang;
        cout << "" << endl;
        cout << "====================== Mengisi data Barang  =========================" << endl;
        isiDataBarang(barang);

        cout << "" << endl;
        cout << "=====================  Data Barang yang sudah di isi : ========================" << endl;
        tampilkanDataBarang(barang);

        cout << "===============================================" << endl;
        cout << "Ingin memasukkan data Barang lagi? (y/n): ";
        cin >> lanjut;

        cin.ignore();
    } while (lanjut == 'y' || lanjut == 'Y');

    cout << "Program selesai. Terima kasih!" << endl;

    return 0;
}