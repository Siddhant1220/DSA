#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;

    Node(int value) : data(value), next(nullptr), prev(nullptr) {}
};

class DoublyLinkedList {
public:
    Node* head;

    DoublyLinkedList() : head(nullptr) {}

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
        newNode->prev = current;
    }

    void deleteNode(Node* del) {
        if (!head || !del) return;

        
        if (head == del) {
            head = del->next;
        }

        if (del->next != nullptr) {
            del->next->prev = del->prev;
        }

        if (del->prev != nullptr) {
            del->prev->next = del->next;
        }

        delete del;
    }

    void printList() {
        Node* current = head;
        while (current) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    DoublyLinkedList list;
    list.append(1);
    list.append(2);
    list.append(3);
    list.append(4);
    list.append(5);

    cout << "Original list: ";
    list.printList();

    Node* nodeToDelete = list.head->next->next;
    list.deleteNode(nodeToDelete);

    cout << "List after deleting node with value 3: ";
    list.printList();

    return 0;
}