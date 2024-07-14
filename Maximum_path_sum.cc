#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* left = NULL;
    Node* right = NULL;
    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
 int Maximum_path_sum(Node* n, int &ans)
 {
   if(n == NULL)
    {
        return 0;
    }
    int left1 = Maximum_path_sum(n->left,ans);
    int right1 = Maximum_path_sum(n->right,ans);
    int node_data = n->data;
    ans = max(ans,left1+node_data+right1);
    return max(0,max(left1+node_data,right1+node_data));

 }
 void inorder(Node* n)
 {
    if(n == NULL)
    {
        return;
    };
    inorder(n->left);
    cout<<n->data<<" ";
    inorder(n->right);
 }
int main()
{
    Node* n = new Node(-10);
    n->left = new Node(9);
    n->right = new Node(20);
    n->left->left = new Node(10);
    n->right->left = new Node(15);
    n->right->right = new Node(7);
    int ans = INT_MIN;
    cout<<"inorder traversal of the binary tree is ";
    inorder(n);
    cout<<endl;
    Maximum_path_sum(n,ans);
    cout<<"Maximum path sum of the given binary tree is "<< ans;
    return 0;
}
