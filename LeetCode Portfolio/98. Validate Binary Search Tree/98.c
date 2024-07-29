// Zican Hao
//CS5008 Spring 2023

// 98. Validate Binary Search Tree (medium)
// https://leetcode.com/problems/validate-binary-search-tree/description/

int arr[10000];
int i=0;
void inorder(struct TreeNode* root){
    if(root!=NULL){
        inorder(root->left);
        arr[i++]=root->val;
        inorder(root->right);
    }
}

bool isValidBST(struct TreeNode* root){
    i=0;
    inorder(root);
    int j;
    for(j=0;j<i-1;j++){
        if(arr[j]>=arr[j+1]){
            return false;
        }
    }
    return true;
}
