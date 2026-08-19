/* Tree Node Structure
class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
    int sumBT(Node* root) {
        // code here
        if(root == nullptr) return 0;
        int l = sumBT(root -> left);
        int r = sumBT(root -> right);
        return l + r + root -> data;
    }
};