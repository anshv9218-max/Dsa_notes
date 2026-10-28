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
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

}
void inorder(Node* root){
    if(root==nullptr){
        return ;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
    
}
void postorder(Node *root){
    if(root==nullptr){return ;}
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int main(){
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    // cout<<root->left->data<<endl;
    // cout<<root->right->data;
    
    
    cout<<"preorder transversal : ";
    preorder(root);
    cout<<"inorder transversal : ";
    inorder(root);
    cout<<"preorder transversal : ";
    postorder(root);
    return 0;

}