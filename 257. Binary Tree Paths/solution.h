#include <vector>
#include <string>

using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;
        if (root == NULL) return res;
        backtrack(res, root, "");
        return res;
    }
private:
    void backtrack(vector<string>& res, TreeNode* node, string path) {
        path = path + to_string(node->val);
        if (node->left == NULL && node->right == NULL) res.push_back(path);
        if (node->left != NULL) backtrack(res, node->left, path + "->");
        if (node->right != NULL) backtrack(res, node->right, path + "->");
    }
};