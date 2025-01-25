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

    // Function to detect a cycle in the linked list
    bool detectCycle() {
        Node* slow = head;
        Node* fast = head;

        while (fast && fast->next) {
            slow = slow->next;            // Move slow one step
            fast = fast->next->next;      // Move fast two steps

            if (slow == fast) {           // Cycle detected
                return true;
            }
        }
        return false;                     // No cycle
    }

    // Function to create a cycle for testing
    void createCycle(int pos) {
        if (pos < 0) return;

        Node* current = head;
        Node* cycleNode = nullptr;
        int index = 0;

        while (current->next) {
            if (index == pos) {
                cycleNode = current; // Save the node to link back
            }
            current = current->next;
            index++;
        }

        current->next = cycleNode; // Create a cycle
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

    // Create a cycle (link last node to node at position 1)
    list.createCycle(1);

    // Detect cycle
    if (list.detectCycle()) {
        cout << "Cycle detected in the linked list." << endl;
    } else {
        cout << "No cycle detected in the linked list." << endl;
    }

    return 0;
}
