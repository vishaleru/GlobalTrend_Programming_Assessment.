#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
};

void serialize(Node* root, FILE* fp) {
    if (root == NULL) {
        fprintf(fp, "%d ", -1);
        return;
    }
    fprintf(fp, "%d ", root->data);
    serialize(root->left, fp);
    serialize(root->right, fp);
}

void deSerialize(Node*& root, FILE* fp) {
    int val;
    if (!fscanf(fp, "%d ", &val) || val == -1)
        return;

    root = new Node(val);
    deSerialize(root->left, fp);
    deSerialize(root->right, fp);
}

void inorder(Node* root) {
    if (root == NULL) {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    Node* root = new Node(5);
    root->left = new Node(4);
    root->right = new Node(14);
    root->left->left = new Node(8);
    root->left->right = new Node(12);
    root->right->left = new Node(10);
    root->left->right->right = new Node(14);

    FILE* fp = fopen("tree.txt", "w");
    if (fp == NULL) {
        puts("Could not open file");
        return 0;
    }
    serialize(root, fp);
    fclose(fp);

    Node* root1 = NULL;
    fp = fopen("tree.txt", "r");
    if (fp == NULL) {
        puts("Could not open file");
        return 0;
    }
    deSerialize(root1, fp);
    fclose(fp);

    printf("Inorder Traversal of the tree constructed from file:\n");
    inorder(root1);

    return 0;
}