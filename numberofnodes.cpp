#include <iostream>

using namespace std;

// Define a structure to represent an item (node) in the list
struct Node {
    int data;
    Node* next;
};

int main() {
    // Create a sample list with 5 items
    Node* head = nullptr;
    Node* current = nullptr;
    for (int i = 1; i <= 5; i++) {
        Node* newNode = new Node;
        newNode->data = i;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode;
            current = newNode;
        } else {
            current->next = newNode;
            current = newNode;
        }
    }

    // Count the number of items (nodes) in the list
    int count = 0;
    current = head;
    while (current != nullptr) {
        count++;
        current = current->next;
    }

    // Print the count
    cout << "Number of items in the list: " << count << endl;

    // Clean up the memory by deleting the nodes
    current = head;
    while (current != nullptr) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}
