#include<iostream>
#include <queue>

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
        root->left = insert(root->left, d);
    else
        root->right = insert(root->right, d);

    return root;

}

int main(){
    int n;
    cin>>n;
    node* root = NULL;

    while(n--){
        int val;
        cin>>val;
        root = insert(root, val);
    }

    queue<node*> q;
    q.push(root);

    while(!q.empty()){
        int s = q.size();

        for(int i=1 ; i<=s ; i++){
            node* d = q.front();
            cout<<d->data<<" ";
            q.pop();

            if(d->left != NULL){
                q.push(d->left);
            }

            if(d->right != NULL){
                q.push(d->right);
            }
        }
    }
}