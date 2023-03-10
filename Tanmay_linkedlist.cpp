#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

void circularLinkedList(Node* head) {
    if (head == NULL) {
        cout << "The list is empty." << endl;
        return;
    }

    Node* temp = head;

    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
}

int main() {
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();
    Node* fourth = new Node();
    
    cout<<"The Circular Linked List \n";

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = fourth;

    fourth->data = 4;
    fourth->next = head;
    circularLinkedList(head);

    return 0;
}
