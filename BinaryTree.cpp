#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* Left;
    Node* Right;

    Node(int val){
        data = val;
        Left = Right = NULL;
    }
};
static int idx = -1;
Node* buildTree(vector<int> preorder){
    idx++;

    if(preorder[idx] == -1){
        return NULL;
    }
    Node* root = new Node(preorder[idx]);
    root->Left = buildTree(preorder);
    root->Right = buildTree(preorder);

    return root;
}
int main(){
    vector<int> preorder = {1, 2,-1,-1,3, 4,-1,-1, 5,-1,-1};
    
    Node* root = buildTree(preorder);
    cout << root->data <<endl;
    cout << root->Left->data <<endl;
    cout << root->Right->data <<endl;
    return 0;
}