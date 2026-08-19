/* Structure of Binary Tree Node
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
    int findMax(Node *root) {
        // code here
        if(root == nullptr) return INT_MIN;
        int l = findMax(root -> left);
        int r = findMax(root -> right);
        return max(max(l,r),root -> data);
    }

    int findMin(Node *root) {
        // code here
        if(root == nullptr) return INT_MAX;
        int l = findMin(root -> left);
        int r = findMin(root -> right);
        return min(min(l,r),root -> data);
    }
};