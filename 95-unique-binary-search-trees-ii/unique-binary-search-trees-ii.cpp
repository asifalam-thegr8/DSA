/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    // Memoization table to store results for subproblems (start, end)
    map<pair<int, int>, vector<TreeNode*>> memo;

    vector<TreeNode*> helper(int start, int end) {
        vector<TreeNode*> all_trees;
        
        // Base case: if start > end, the subtree is empty (nullptr)
        if (start > end) {
            all_trees.push_back(nullptr);
            return all_trees;
        }

        // Return memoized result if already computed
        if (memo.find({start, end}) != memo.end()) {
            return memo[{start, end}];
        }

        // Iterate through all values from start to end to act as the root
        for (int i = start; i <= end; ++i) {
            // Generate all left subtrees with values less than i
            vector<TreeNode*> left_trees = helper(start, i - 1);
            
            // Generate all right subtrees with values greater than i
            vector<TreeNode*> right_trees = helper(i + 1, end);

            // Connect every left and right subtree to the current root i
            for (TreeNode* left : left_trees) {
                for (TreeNode* right : right_trees) {
                    TreeNode* current_node = new TreeNode(i, left, right);
                    all_trees.push_back(current_node);
                }
            }
        }

        return memo[{start, end}] = all_trees;
    }

public:
    vector<TreeNode*> generateTrees(int n) {
        if (n == 0) return {};
        memo.clear();
        return helper(1, n);
    }
};