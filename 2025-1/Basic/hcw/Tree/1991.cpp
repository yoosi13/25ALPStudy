#include <iostream>
#include <unordered_map>
using namespace std;

struct Node {
    char data;
    Node* left;
    Node* right;
    Node(char val) : data(val), left(nullptr), right(nullptr) {}
};

unordered_map<char, Node*> nodes;

void preorder(Node* node) {
    if (!node) return;
    cout << node->data;
    preorder(node->left);
    preorder(node->right);
}

void inorder(Node* node) {
    if (!node) return;
    inorder(node->left);
    cout << node->data;
    inorder(node->right);
}

void postorder(Node* node) {
    if (!node) return;
    postorder(node->left);
    postorder(node->right);
    cout << node->data;
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        char parent, left, right;
        cin >> parent >> left >> right;

        // 부모 노드가 없으면 생성
        if (!nodes[parent])
            nodes[parent] = new Node(parent);

        // 왼쪽 자식
        if (left != '.') {
            if (!nodes[left])
                nodes[left] = new Node(left);
            nodes[parent]->left = nodes[left];
        }

        // 오른쪽 자식
        if (right != '.') {
            if (!nodes[right])
                nodes[right] = new Node(right);
            nodes[parent]->right = nodes[right];
        }
    }

    Node* root = nodes['A'];

    preorder(root);
    cout << '\n';
    inorder(root);
    cout << '\n';
    postorder(root);
    cout << '\n';

    return 0;
}
