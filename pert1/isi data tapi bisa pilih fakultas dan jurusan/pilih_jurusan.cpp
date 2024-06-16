#include <iostream>
using namespace std;

int main (){
    string Nama;
    string NIM;
    string fakultas;
    int a;

    cout << "=============================================" <<endl;
    cout << "program tambah data tapi bisa milih data" <<endl;
    cout << "=============================================" <<endl;

    cout << "masukan Nama mahasiswa : " ;
    getline (cin, Nama);

    cout << "masukan NIM mahasiswa : ";
    getline (cin, NIM);

    cout << "masukan fakultas mahasiswa : ";
    getline (cin, fakultas);

    cout << "masukan jurusan mahasiswa : "<<endl;

    cout << "1. Teknik Informatika" << endl;
    cout << "2. Sistem Informasi" << endl;
    cout << "Pilih jurusan : ";
    cin >> a;
    if (a == 1 ){
        cout << "Jurusan  : Teknik Informatika" << endl;
    }
    else if (a == 2) {
        cout << "Jurusan  : Sistem Informasi" << endl;
    }
    else {
        cout << "Pilihan tidak ada" << endl;
    }
    
    return  0;

}