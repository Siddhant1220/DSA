#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

class LinkedList {
public:
    Node* head;

    LinkedList() : head(nullptr) {}

    void append(int data) {
        Node* newNode = new Node(data);
        if (!head) {
            head = newNode;
            return;
        }
        Node* current = head;
        while (current->next) {
            current = current->next;
        }
        current->next = newNode;
    }

    void findLocalMinimaMaxima() {
        if (!head || !head->next) {
            cout << "The list has no local minima or maxima." << endl;
            return;
        }

        Node* prev = nullptr;
        Node* current = head;
        Node* next = current->next;

        cout << "Local Minima: ";
        while (next) {
            if (prev && current->data < prev->data && current->data < next->data) {
                cout << current->data << " ";
            }
            prev = current;
            current = next;
            next = next->next;
        }
        cout << endl;

        // Reset pointers to find local maxima
        prev = nullptr;
        current = head;
        next = current->next;

        cout << "Local Maxima: ";
        while (next) {
            if (prev && current->data > prev->data && current->data > next->data) {
                cout << current->data << " ";
            }
            prev = current;
            current = next;
            next = next->next;
        }
        cout << endl;
    }

    void printList() {
        Node* current = head;
        while (current) {
            cout << current->data << " -> ";
            current = current->next;
        }
        cout << "nullptr" << endl;
    }
};

int main() {
    LinkedList list;

    // Append data to the linked list
    list.append(9);
    list.append(7);
    list.append(10);
    list.append(5);
    list.append(6);
    list.append(2);
    list.append(15);
    list.append(10);

    cout << "Linked list: " << endl;
    list.printList();

    // Find and print local minima and maxima
    list.findLocalMinimaMaxima();

    return 0;
}
