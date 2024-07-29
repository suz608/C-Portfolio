// Zican Hao
// CS5008 Spring 2023

// 222. Count Complete Tree Nodes (medium)
// https://leetcode.com/problems/count-complete-tree-nodes/

int countNodes(struct TreeNode* root){
    if(root==NULL){return 0;}
    if(root->left!=NULL && root->right!=NULL){
        return 1+countNodes(root->left)+countNodes(root->right);
    }
    if(root->left!=NULL){
        return 1+countNodes(root->left);
    }
    if(root->right!=NULL){
        return 1+countNodes(root->right);
    }
    return 1;
}
