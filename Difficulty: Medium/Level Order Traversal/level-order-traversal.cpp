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
        queue<Node*>dq;
        vector<int> ans;
        dq.push(root);
        
        while(dq.size() > 0){
            Node *front = dq.front();
            dq.pop();
            ans.push_back(front -> data);
            if(front -> left != NULL) dq.push(front -> left);
            if(front -> right != NULL) dq.push(front -> right);
        }
        return ans;
    }
};