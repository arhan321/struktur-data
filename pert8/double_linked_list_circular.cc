#include <iostream>
using namespace std;

// Struktur untuk node double linked list
struct Node {
    int data;
    Node* next;
    Node* prev;
};

// Fungsi untuk menambahkan node baru di head circular double linked list
void addAtHead(Node** head_ref, int new_data) {
    Node* new_node = new Node();  // Buat node baru
    new_node->data = new_data;

    if (*head_ref == nullptr) {  // Jika linked list kosong
        new_node->next = new_node; // Node baru menunjuk ke dirinya sendiri
        new_node->prev = new_node;
        *head_ref = new_node;
    } else {
        Node* last = (*head_ref)->prev;

        new_node->next = *head_ref;
        new_node->prev = last;

        last->next = new_node;
        (*head_ref)->prev = new_node;

        *head_ref = new_node;  // Jadikan node baru sebagai head
    }
}

// Fungsi untuk menampilkan seluruh node dalam circular double linked list
void display(Node* head) {
    if (head == nullptr) return;

    Node* temp = head;
    cout << "Traversal dalam arah maju: ";
    do {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != head);
    cout << "(head)" << endl;

    cout << "Traversal dalam arah mundur: ";
    Node* last = head->prev;
    temp = last;
    do {
        cout << temp->data << " -> ";
        temp = temp->prev;
    } while (temp != last);
    cout << "(tail)" << endl;
}

int main() {
    Node* head = nullptr;  // Inisialisasi circular double linked list dengan head kosong
    int choice, value;

    while (true) {
        cout << "Menu:" << endl;
        cout << "1. Tambah data di head" << endl;
        cout << "2. Tampilkan circular double linked list" << endl;
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
