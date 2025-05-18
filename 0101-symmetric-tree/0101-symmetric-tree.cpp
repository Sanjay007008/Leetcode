class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if (!root) return true;

        queue<TreeNode*> q;
        q.push(root->left);
        q.push(root->right);

        while (!q.empty()) {
            TreeNode* f = q.front(); q.pop();
            TreeNode* s = q.front(); q.pop();

            if (!f && !s) continue;
            if (!f || !s) return false;
            if (f->val != s->val) return false;

            q.push(f->left);
            q.push(s->right);
            q.push(f->right);
            q.push(s->left);
        }

        return true;
    }
};
