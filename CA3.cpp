#include <iostream>
using namespace std;

struct Node {
    int salary;
    Node* left;
    Node* right;

    Node(int value) : salary(value), left(nullptr), right(nullptr) {}
}; 

Node* insert(Node* root, int salary) {
    if (root == nullptr) {
        return new Node(salary);
    }

    if (salary < root->salary) {
        root->left = insert(root->left, salary);
    } else {
        root->right = insert(root->right, salary);
    }

    return root;
}

Node* insertWithPath(Node* root, int salary) {
    if (root == nullptr) {
        cout << "Inserted " << salary << " as root." << endl;
        return new Node(salary);
    }

    if (salary < root->salary) {
        cout << salary << " goes left of " << root->salary << endl;
        root->left = insertWithPath(root->left, salary);
    } else {
        cout << salary << " goes right of " << root->salary << endl;
        root->right = insertWithPath(root->right, salary);
    }

    return root;
}

void preorderTraversal(Node* root) {
    if (root == nullptr) {
        return;
    }

    cout << root->salary << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

int main() {
    Node* root = nullptr;


    int salaries[] = {80000, 70000, 90000, 75000, 95000};
    for (int salary : salaries) {
        root = insert(root, salary);
    }

    cout << "Insertion path for 85000:\n";
    root = insertWithPath(root, 85000);

    cout << "\nPre-order traversal for management reporting:\n";
    preorderTraversal(root);
    cout << endl;

    return 0;
}
