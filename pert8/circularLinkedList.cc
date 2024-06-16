#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void append(Node** head_ref, int new_data) {
    Node* new_node = new Node();
    Node* last = *head_ref;
    new_node->data = new_data;
    new_node->next = *head_ref;

    if (*head_ref == nullptr) {
        *head_ref = new_node;
        new_node->next = *head_ref;
        return;
    }

    while (last->next != *head_ref) {
        last = last->next;
    }

    last->next = new_node;
}

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
    Node* head = nullptr;

    append(&head, 1);
    append(&head, 2);
    append(&head, 3);

    display(head);

    return 0;
}
