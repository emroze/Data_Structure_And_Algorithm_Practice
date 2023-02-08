
/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/

    int h(Node* root) {
        int x=0,y=0;
        if(root->left!=NULL){
            x=1+h(root->left);
        } 
        if(root->right!=NULL) {
            y=1+h(root->right);
        }
        if(root->left==NULL&&root->right==NULL){
            return 1;
        }
        return (x>y)?x:y; 
    }
    
    int height(Node* root) {
        int x = h(root);
        return x-1;
    }

