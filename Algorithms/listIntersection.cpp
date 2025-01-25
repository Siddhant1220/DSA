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

    int getLength() {
        int length = 0;
        Node* current = head;
        while (current) {
            length++;
            current = current->next;
        }
        return length;
    }

    Node* getIntersectionNode(LinkedList& other) {
        int len1 = getLength();
        int len2 = other.getLength();

        Node* current1 = head;
        Node* current2 = other.head;

        if (len1 > len2) {
            for (int i = 0; i < len1 - len2; i++) {
                current1 = current1->next;
            }
        } else {
            for (int i = 0; i < len2 - len1; i++) {
                current2 = current2->next;
            }
        }

        while (current1 && current2) {
            if (current1 == current2) {
                return current1;
            }
            current1 = current1->next;
            current2 = current2->next;
        }

        return nullptr;
    }
};

int main() {
    LinkedList list1;
    list1.append(1);
    list1.append(2);
    list1.append(3);
    list1.append(4);
    list1.append(5);

    LinkedList list2;
    list2.append(9);
    list2.append(8);

    // Creating intersection
    list2.head->next->next = list1.head->next->next->next; // Intersection at node with value 4

    Node* intersection = list1.getIntersectionNode(list2);
    if (intersection) {
        cout << "Intersection at node with value: " << intersection->data << endl;
    } else {
        cout << "No intersection found." << endl;
    }

    return 0;
}