class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (root == nullptr) return ans;

        queue<TreeNode*> q;  // Queue for level-order traversal
        q.push(root);
        bool leftToRight = true;  // Direction of traversal

        while (!q.empty()) {
            int n = q.size();  // Number of nodes at the current level
            vector<int> level(n);

            for (int i = 0; i < n; i++) {
                TreeNode* node = q.front();
                q.pop();

                // Insert node's value at the correct position based on the direction
                int index = leftToRight ? i : n - 1 - i;
                level[index] = node->val;

                // Add child nodes for the next level
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }

            ans.push_back(level);  // Add the current level to the result
            leftToRight = !leftToRight;  // Toggle direction
        }

        return ans;
    }
};