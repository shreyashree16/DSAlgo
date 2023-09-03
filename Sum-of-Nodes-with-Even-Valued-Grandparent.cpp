class Solution {
    int sum=0;
public:
    int sumEvenGrandparent(TreeNode* root) {
        helper(root,sum);
        return sum;
    }
    int helper(TreeNode* root,int& sum){
        if(root==NULL)
        return sum;
        if(root->val%2==0){
            if(root->left){
                if(root->left->left){
                    sum+=(root->left->left->val);
                }
                if(root->left->right)
                sum+=root->left->right->val;
            }
            if(root->right){
                if(root->right->right){
                    sum+=root->right->right->val;
                }
                if(root->right->left)
                sum+=root->right->left->val;
            }
        }
       sum= helper(root->left,sum);
       sum=helper(root->right,sum);
       return sum;
    }
};