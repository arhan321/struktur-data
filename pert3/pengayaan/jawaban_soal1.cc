#include <iostream>
#include <string>
using namespace std; 

struct Buku {
    string judul;
    string pengarang; 
    int tahunTerbit;
};

int main() {
    Buku buku1;
    Buku buku2;
    
    cout << "===============================================" << endl;
    buku1.judul = "Harry Potter and the Philosopher's Stone";
    buku1.pengarang = "J.K. Rowling"; 
    buku1.tahunTerbit = 1997;

    cout << "Judul: " << buku1.judul << endl;
    cout << "Pengarang: " << buku1.pengarang << endl;
    cout << "Tahun Terbit: " << buku1.tahunTerbit << endl;

    cout << "===============================================" << endl;
    buku2.judul = "The Great Gatsby";
    buku2.pengarang = "F. Scott Fitzgerald";
    buku2.tahunTerbit = 1925;

    cout << "Judul: " << buku2.judul << endl;   
    cout << "Pengarang: " << buku2.pengarang << endl;
    cout << "Tahun Terbit: " << buku2.tahunTerbit << endl;

    return 0;
}