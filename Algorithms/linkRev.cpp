#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int value) : data(value), next(nullptr) {}
};

class LinkedList
{
public:
    Node *head;

    LinkedList() : head(nullptr) {}

    void append(int data)
    {
        Node *newNode = new Node(data);
        if (!head)
        {
            head = newNode;
            return;
        }
        Node *current = head;
        while (current->next)
        {
            current = current->next;
        }
        current->next = newNode;
    }

    void printList()
    {
        Node *current = head;
        while (current)
        {
            cout << current->data << " -> ";
            current = current->next;
        }
        cout << "nullptr" << endl;
    }

    void reverse()
    {
        Node *prev = nullptr;
        Node *current = head;
        Node *next = nullptr;

        while (current)
        {
            next = current->next; // Save the next node
            current->next = prev; // Reverse the link
            prev = current;       // Move prev to the current node
            current = next;       // Move to the next node
        }
        head = prev; // Update head to the new front of the list
    }
};

int main()
{
    LinkedList list;

    // Append data to the linked list
    list.append(1);
    list.append(2);
    list.append(3);
    list.append(4);

    cout << "Original linked list:" << endl;
    list.printList();

    // Reverse the linked list
    list.reverse();

    cout << "Reversed linked list:" << endl;
    list.printList();

    return 0;
}
// Explanation : Node Struct :

//     Represents a node in the linked list with two members : data : 
//    The value stored in the node.next : Pointer to the next node.LinkedList Class :

//     Manages the linked list with the following methods : append(int data) : 
       //Adds a new node to the end of the list.printList() : Prints all the 
       //elements of the list.reverse() : Reverses the linked list in place.Reverse Method :

//     Three pointers(prev, current, and next) are used to reverse the next pointers
    // of each node.The head pointer is updated to point to the new front of the list(the last node)
//         .Example Usage :

//     The main function demonstrates creating a linked list,
//     appending nodes, printing the list, reversing it, and printing the reversed list.
