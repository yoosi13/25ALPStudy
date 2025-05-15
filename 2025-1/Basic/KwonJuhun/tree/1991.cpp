#include <bits/stdc++.h>
using namespace std;

int n;
char leftChild[26], rightChild[26];

void preorder(char node) {
    if (node == '.') return;
    cout << node; // 전위: 루트 -> 왼쪽 -> 오른쪽
    preorder(leftChild[node - 'A']);
    preorder(rightChild[node - 'A']);
}

void inorder(char node) {
    if (node == '.') return;
    inorder(leftChild[node - 'A']);
    cout << node; // 중위: 왼쪽 -> 루트 -> 오른쪽
    inorder(rightChild[node - 'A']);
}

void postorder(char node) {
    if (node == '.') return;
    postorder(leftChild[node - 'A']);
    postorder(rightChild[node - 'A']);
    cout << node; // 후위: 왼쪽 -> 오른쪽 -> 루트
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++) {
        char root, l, r;
        cin >> root >> l >> r;
        leftChild[root - 'A'] = l;
        rightChild[root - 'A'] = r;
    }

    preorder('A'); cout << '\n';
    inorder('A'); cout << '\n';
    postorder('A'); cout << '\n';

    return 0;
}
