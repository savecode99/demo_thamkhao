#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct Node {
    int val;
    Node* left;
    Node* right;
    Node(int x) : val(x), left(NULL), right(NULL) {}
};

// Hàm d? chèn nút vào cây d?a trên m?ng d?u vào
Node* insertLevelOrder(const vector<int>& arr, Node* root, int i, int n) {
    // N?u v? trí hi?n t?i h?p l?
    if (i < n) {
        Node* temp = NULL;
        if (arr[i] != -1) {
            temp = new Node(arr[i]);

            // chèn nút con bên trái
            temp->left = insertLevelOrder(arr, temp->left, 2 * i + 1, n);

            // chèn nút con bên ph?i
            temp->right = insertLevelOrder(arr, temp->right, 2 * i + 2, n);
        }
        return temp;
    }
    return root;
}

// Hàm d? in th? t? c?p d?
void printLevelOrder(Node* root) {
    if (root == NULL)
        return;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        int nodeCount = q.size();

        // In các nút ? cùng m?t c?p d?
        while (nodeCount > 0) {
            Node* node = q.front();
            cout << node->val << " ";
            q.pop();
            if (node->left != NULL)
                q.push(node->left);
            if (node->right != NULL)
                q.push(node->right);
            nodeCount--;
        }
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t; // Ð?c s? lu?ng testcases
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        
        // Ð?c các giá tr? cho m?ng
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        Node* root = insertLevelOrder(arr, NULL, 0, n);
        printLevelOrder(root);
    }
    return 0;
}
