#include<bits/stdc++.h>

using namespace std;

struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

    unordered_map<int, int>map;

TreeNode* dfs(vector<int>& preorder, vector<int>& postorder, int ps, int pe, int poss, int pose) {
      if(ps > pe || poss > pose) return nullptr;

      TreeNode* node = new TreeNode(preorder[ps]);

      if(ps + 1 > pe) return node;
      int leftindex = map[preorder[ps + 1]];
      int num = leftindex - poss;

      node->left = dfs(preorder, postorder, ps + 1, ps + num + 1, poss, leftindex);
      node->right = dfs(preorder, postorder, ps + num + 2, pe, leftindex + 1, pe - 1);
      return node;
}

     
TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
        int size = preorder.size();

        for(int i = 0; i < size; ++i){
            map[postorder[i]] = i;
        }
        return dfs(preorder, postorder, 0, preorder.size() -1, 0, postorder.size()- 1);
}

int main (){
    
}
