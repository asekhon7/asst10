#include <iostream>
using namespace std;

struct Node {
    int val;
    Node* left;
    Node* right;
    Node(int v) : val(v), left(NULL), right(NULL) {}
};

bool checkDuplicates(Node* root, int visited[], int& size) {
    if (!root) return false;

    for (int i = 0; i < size; i++) {
        if (visited[i] == root->val) return true;
    }

    visited[size++] = root->val;

    return checkDuplicates(root->left, visited, size) ||
           checkDuplicates(root->right, visited, size);
}

int main() {
    Node* root = new Node(5);
    root->left = new Node(3);
    root->right = new Node(7);
    root->left->left = new Node(2);
    root->left->right = new Node(3); // duplicate value

    int visited[100]; // assume max 100 nodes
    int size = 0;

    if (checkDuplicates(root, visited, size))
        cout << "Duplicates Found";
    else
        cout << "No Duplicates";
}
