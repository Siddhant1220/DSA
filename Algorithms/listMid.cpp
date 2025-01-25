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

    void printList() {
        Node* current = head;
        while (current) {
            cout << current->data << " -> ";
            current = current->next;
        }
        cout << "nullptr" << endl;
    }

    Node* findMiddle() {
        if (!head) return nullptr;

        Node* slow = head;
        Node* fast = head;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }
};

int main() {
    LinkedList list;

    // Append data to the linked list
    list.append(1);
    list.append(2);
    list.append(3);
    list.append(4);
    list.append(5);

    cout << "Linked list:" << endl;
    list.printList();

    // Find the middle of the linked list
    Node* middle = list.findMiddle();
    if (middle) {
        cout << "The middle of the linked list is: " << middle->data << endl;
    } else {
        cout << "The linked list is empty." << endl;
    }

    return 0;
}









// Explanation:
// findMiddle Method:

// slow pointer moves one step at a time.
// fast pointer moves two steps at a time.
// When fast reaches the end (fast == nullptr or fast->next == nullptr), slow will be at the middle.
// Edge Cases:

// If the linked list is empty (head == nullptr), return nullptr.
// For lists with an even number of nodes, the function will return the second middle node.
// Example Usage:

// Create a linked list, append nodes, and call findMiddle() to find and display the middle node.
// Sample Output: