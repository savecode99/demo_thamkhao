#include <iostream>
#include <vector>
#include <queue>

// Define the TreeNode class
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// Function to insert nodes into the binary tree from a vector
TreeNode* insertLevelOrder(const std::vector<int>& nodes, int i) {
    if (i < nodes.size() && nodes[i] != -1) {
        TreeNode* root = new TreeNode(nodes[i]);
        root->left = insertLevelOrder(nodes, 2 * i + 1);
        root->right = insertLevelOrder(nodes, 2 * i + 2);
        return root;
    }
    return nullptr;
}

// Function to get the right side view of the binary tree
std::vector<int> rightSideView(TreeNode* root) {
    std::vector<int> rightView;
    if (root == nullptr) return rightView;

    std::queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        int levelSize = q.size();
        for (int i = 0; i < levelSize; ++i) {
            TreeNode* node = q.front();
            q.pop();
            if (i == levelSize - 1) rightView.push_back(node->val);
            if (node->left != nullptr) q.push(node->left);
            if (node->right != nullptr) q.push(node->right);
        }
    }
    return rightView;
}

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n, val;
        std::cin >> n;

        std::vector<int> nodes;
        for (int i = 0; i < n; ++i) {
            std::cin >> val;
            nodes.push_back(val);
        }

        TreeNode* root = insertLevelOrder(nodes, 0);
        std::vector<int> rightView = rightSideView(root);
        for (int val : rightView) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
