#include <iostream>
#include <vector>
using namespace std;

struct Film {
    string judul;
    string sutradara;
    int tahunRilis;
    float rating;
};

void isiDataFilm(Film &film) {
    cout << "Masukkan Judul Film: ";
    getline(cin, film.judul);

    cout << "Masukkan Nama Sutradara: ";
    getline(cin, film.sutradara);
    
    cout << "Masukkan Tahun Rilis: ";
    cin >> film.tahunRilis;

    cout << "Masukkan Rating Film (0-10): ";
    cin >> film.rating;
    
    cin.ignore();
}

int main() {
    vector<Film> daftarFilm(2);
    
    cout << "===================== Pengelola Informasi Film ===================" << endl;
    
    cout << "Masukkan Data Film Pertama" << endl;
    isiDataFilm(daftarFilm[0]);
    
    cout << "Masukkan Data Film Kedua" << endl;
    isiDataFilm(daftarFilm[1]);
    
    cout << "===============================================" << endl;
    cout << "===================== Daftar Informasi Film =====================" << endl;
    
    cout << "Film Pertama" << endl;
    cout << "Judul: " << daftarFilm[0].judul << endl;
    cout << "Sutradara: " << daftarFilm[0].sutradara << endl;
    cout << "Tahun Rilis: " << daftarFilm[0].tahunRilis << endl;
    cout << "Rating: " << daftarFilm[0].rating << endl;
    cout << "===============================================" << endl;
    
    cout << "Film Kedua" << endl;
    cout << "Judul: " << daftarFilm[1].judul << endl;
    cout << "Sutradara: " << daftarFilm[1].sutradara << endl;
    cout << "Tahun Rilis: " << daftarFilm[1].tahunRilis << endl;
    cout << "Rating: " << daftarFilm[1].rating << endl;
    cout << "===============================================" << endl;

    return 0;
}
