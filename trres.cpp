#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node*left=nullptr;
    Node*right=nullptr;
    Node(int val){
        data=val;
    }
};
void preorder(Node* root){
    if(root==nullptr) return ;
    cout<<root->data;
    preorder(root->left);
    preorder(root->right);

}
int main(){
    Node* root=new Node(10);
    root->left=new Node(2);
    root->right=new Node(3);
    // cout<<root->left->data<<endl;
    // cout<<root->right->data;
    cout<<'preorder transversal'<<preorder(root);
    return 0;

}