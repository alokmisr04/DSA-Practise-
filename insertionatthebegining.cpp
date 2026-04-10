//Inserting elemnt at the beginging /or in the position of head.
#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
void insertAtHead(Node* &head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}
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
    int n, value, value1;
    cout << "Enter number of elements: ";
    cin >> n;
    for(int i = 0; i < n; i++) {
        cout << "Enter value at position " << i+1 << ": ";
        cin >> value1;
        insertAtHead(head, value1);   // ✅ FIXED
    }
    cout << "Enter the value to be inserted at head: ";
    cin >> value;
    insertAtHead(head, value);

    cout << "\nLinked List: ";
    display(head);

    return 0;
}
