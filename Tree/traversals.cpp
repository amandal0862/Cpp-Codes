#include <iostream>

using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;

        node(int d){
            data = d;
            left = NULL;
            right = NULL;
        }
};

node* insert(node* root, int d){
    if(root == NULL){
        root = new node(d);
        return root;
    }
    
    if(d < root->data)
        root->left = insert(root->left , d);
    else
        root->right = insert(root->right , d);

    return root;
}

void preorder(node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node* root){
    if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

void Inorder(node* root){
    if(root == NULL){
        return;
    }
    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}

int main(){
    int n;
    cout<<"Enter the no. of Nodes : ";
    cin>>n;
    node* root = NULL;

    cout<<"Enter the value of Nodes: ";
    while(n--){
        int val;
        cin>>val;
        root = insert(root, val);
    }
    cout<<"PreOrder Traversal : ";
    preorder(root);
    cout<<endl;
    cout<<"PostOrder Traversal : ";
    postorder(root);
    cout<<endl;
    cout<<"InOrder Traversal : ";
    Inorder(root);
}