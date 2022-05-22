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
public:
    int ctr=0;
    TreeNode* merge(TreeNode* root1, TreeNode* root2)
               {
        // ctr++;
        // cout<<ctr;
        int sum=0;
        
        
                 if(root1==NULL && root2!=NULL)
                    return root2;
                else if(root1!=NULL && root2==NULL)
                    return root1;
                else if(root1 == NULL && root2 == NULL)
                    return NULL;
        
                else
                    sum=root2->val+root1->val;
        TreeNode* node= new TreeNode(sum);
        // cout<<node->val;

                node->left = merge(root1->left,root2->left);
                node->right = merge(root1->right,root2->right);
        return node;

               }
    
    
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        TreeNode* node = merge(root1,root2);
        return node;
    }
};