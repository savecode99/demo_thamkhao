#include <iostream>
#include <vector>
#include <algorithm>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode* insertLevelOrder(const std::vector<int>& arr, TreeNode* root, int i, int n) {
    if (i < n && arr[i] != -1) {
        TreeNode* temp = new TreeNode(arr[i]);
        root = temp;

        // insert left child
        root->left = insertLevelOrder(arr, root->left, 2 * i + 1, n);

        // insert right child
        root->right = insertLevelOrder(arr, root->right, 2 * i + 2, n);
    }
    return root;
}

int maxDepth(TreeNode* root) {
    if (root == NULL) {
        return 0;
    } else {
        int leftDepth = maxDepth(root->left);
        int rightDepth = maxDepth(root->right);

        return std::max(leftDepth, rightDepth) + 1;
    }
}

int main() {
    int t; // Number of test cases
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> arr[i];
        }
        TreeNode* root = insertLevelOrder(arr, NULL, 0, n);
        std::cout << maxDepth(root) << std::endl;

        // Don't forget to delete the allocated memory
        // ... Add your code to delete the tree ...
    }
    return 0;
}
