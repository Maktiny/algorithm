#include<bits/stdc++.h>

using namespace std;

struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
#define max  10

int n = 0;

TreeNode* create(int index) {

    TreeNode* node = new TreeNode(++n);
    if(index  == 1) return node;
    
    //TreeNode* node = new TreeNode(index);
    node->left = create(index - 1);
    node->right = create(index- 1);
    return node;
}

void traverse(TreeNode* root) {
    if(root == nullptr) return ;
    printf("inorder val is: %d\n", root->val);

    traverse(root->left);

    //printf("inorder val is: %d\n", root->val);

    traverse(root->right);

}

int main() {
    

    TreeNode* node = create(4);
    printf("\n");
    traverse(node);
    return 0;
}
