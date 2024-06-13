#include <iostream>
using namespace std;

// Struktur untuk node linked list
struct Node {
    int data;
    Node* next;
};

// Fungsi untuk menambahkan node baru di head circular linked list
void addAtHead(Node** head_ref, int new_data) {
    Node* new_node = new Node();
    new_node->data = new_data;
    
    if (*head_ref == nullptr) {
        new_node->next = new_node; // Circular linked list pertama kali
        *head_ref = new_node;
    } else {
        Node* temp = *head_ref;
        while (temp->next != *head_ref) {
            temp = temp->next;
        }
        temp->next = new_node;
        new_node->next = *head_ref;
        *head_ref = new_node;
    }
}

// Fungsi untuk menampilkan seluruh node dalam circular linked list
void display(Node* head) {
    if (head == nullptr) return;
    Node* temp = head;
    do {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != head);
    cout << "(head)" << endl;
}

int main() {
    Node* head = nullptr;  // Inisialisasi circular linked list dengan head kosong
    int choice, value;

    while (true) {
        cout << "Menu:" << endl;
        cout << "1. Tambah data di head" << endl;
        cout << "2. Tampilkan circular linked list" << endl;
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
