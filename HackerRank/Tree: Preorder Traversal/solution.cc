

/* you only have to complete the function given below.  
Node is defined as  

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

*/

    void preOrder(Node *root) {
        cout << root->data << " ";
        if(root->left!=NULL) preOrder(root->left);
        if(root->right!=NULL) preOrder(root->right);
        
    }

