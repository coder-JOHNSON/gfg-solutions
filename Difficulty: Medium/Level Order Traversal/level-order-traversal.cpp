/* Structure of Binary Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
    vector<int> levelOrder(Node *root) {
        // code here
        queue<Node*>q;
        vector<int>v;
        if(root == nullptr) return v;
        q.push(root);
        while(!q.empty()){
            Node *temp = q.front();  // Node *temp store address of node 
            q.pop();
            v.push_back(temp -> data);
            
            if(temp -> left != nullptr) q.push(temp -> left);
            if(temp -> right != nullptr) q.push(temp -> right);

        }
        return v;
    }
};