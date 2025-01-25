#include <iostream>
#include <queue>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

void insert(Node*& root, int data) {
    if (root == nullptr) {
        root = new Node(data);
        return;
    }
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();
        if (temp->left == nullptr) {
            temp->left = new Node(data);
            return;
        } else {
            q.push(temp->left);
        }
        if (temp->right == nullptr) {
            temp->right = new Node(data);
            return;
        } else {
            q.push(temp->right);
        }
    }
}

void inorder(Node* root) {
    if (root == nullptr) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}


int main() {
    Node* root = nullptr;

    insert(root, 10);
    insert(root, 20);
    insert(root, 30);
    insert(root, 40);

    cout << "Inorder Traversal: ";
    inorder(root);
    cout << endl;

    return 0;
}
