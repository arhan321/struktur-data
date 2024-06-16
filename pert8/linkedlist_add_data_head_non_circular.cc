#include <iostream>
using namespace std;

// Struktur untuk node linked list
struct Node {
    int data;
    Node* next;
};

// Fungsi untuk menambahkan node baru di head linked list
void addAtHead(Node** head_ref, int new_data) {
    Node* new_node = new Node();  // Buat node baru
    new_node->data = new_data;    // Masukkan data ke node baru
    new_node->next = *head_ref;   // Hubungkan node baru ke head sebelumnya
    *head_ref = new_node;         // Jadikan node baru sebagai head
}

// Fungsi untuk menampilkan seluruh node dalam linked list
void display(Node* node) {
    while (node != nullptr) {
        cout << node->data << " -> ";
        node = node->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = nullptr;  // Inisialisasi linked list dengan head kosong
    int choice, value;

    while (true) {
        cout << "Menu:" << endl;
        cout << "1. Tambah data di head" << endl;
        cout << "2. Tampilkan linked list" << endl;
        cout << "3. Keluar" << endl;
        cout << "Pilih opsi: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Masukkan data: ";
                cin >> value;
                addAtHead(&head, value);
                break;
            case 2:
                display(head);
                break;
            case 3:
                cout << "Keluar dari program." << endl;
                return 0;
            default:
                cout << "Pilihan tidak valid." << endl;
        }
    }

    return 0;
}
