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
        cout << "====================== Mengisi data Barang  =========================" << endl;
        isiDataBarang(barang);

        cout << "" << endl;
        cout << "=====================  Data Barang yang sudah di isi : ========================" << endl;
        tampilkanDataBarang(barang);

        cout << "===============================================" << endl;
        cout << "Ingin memasukkan data Barang lagi? (y/n): ";
        cin >> lanjut;

        cin.ignore();
    } while (lanjut == 'y' || lanjut == 'Y');

    cout << "Program selesai. Terima kasih!" << endl;

    return 0;
}
