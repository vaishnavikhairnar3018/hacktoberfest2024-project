#include <iostream>

struct Node {
    int data;
    Node* next;
};

// Function to insert a node at the beginning of a Linked List
void insertAtBeginning(Node** head, int newData) {
    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = (*head);
    (*head) = newNode;
}

// Function to print the Linked List
void printList(Node* node) {
    while (node != nullptr) {
        std::cout << node->data << " ";
        node = node->next;
    }
    std::cout << std::endl;
}

int main() {
    Node* head = nullptr;
    insertAtBeginning(&head, 1);
    insertAtBeginning(&head, 2);
    insertAtBeginning(&head, 3);

    std::cout << "Linked List: ";
    printList(head);

    return 0;
}
