//A progtam to perform deletion at the head
#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
// Insert at head (to build list)
void insertAtHead(Node* &head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}
// Delete at head
void deletionAtHead(Node* &head) {
    if(head == NULL) {
        cout << "List is empty, nothing to delete\n";
        return;
    }
    Node* temp = head;   // store current head
    head = head->next;   // move head
    delete temp;         // free memory
}
// Display
void display(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
int main() {
    Node* head = NULL;
    int n, value;
    cout << "Enter number of elements: ";
    cin >> n;
    // Create linked list
    for(int i = 0; i < n; i++) {
        cout << "Enter value " << i+1 << ": ";
        cin >> value;
        insertAtHead(head, value);
    }
    cout << "\nLinked list before deletion:\n";
    display(head);
    // Delete head
    deletionAtHead(head);
    cout << "\nLinked list after deletion:\n";
    display(head);
    return 0;
}
