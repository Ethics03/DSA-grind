#include <bits/stdc++.h>

using namespace std;


// COUNT COMPLETE TREE NODES (BINARY SEARCH)
//
// BASICALLY FINDING THE NODES IN A COMPLETE BINARY TREE
//
// WE USE RECURSION -> BASICALLY FINDING IF THE LEFT OF THE ROOT IS A COMPLETE TREE OR NOT AND SO FOR RIGHT
// IF THEY ARE AND (HEIGHT OF LEFT) = (HEIGHT OF RIGHT) -> TOTAL NODES (1<<lf - 1) 
// IF NOT THEN THE NUMBER OF NODES ARE -> 1 (ROOT) + countNodes(root->left) + countNodes(root->right)
//
//
// DIFFICULTY -> EASY





struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };


int findLefth(TreeNode* node);
int findRighth(TreeNode* node);

TreeNode* node4 = new TreeNode(4);
TreeNode* node5 = new TreeNode(5);
TreeNode* node6 = new TreeNode(6);

TreeNode* node2 = new TreeNode(2, node4, node5);
TreeNode* node3 = new TreeNode(3, node6, nullptr);

TreeNode* root = new TreeNode(1, node2, node3);

int countNodes(TreeNode* root) {
        if(root == NULL) return 0;
        int lf = findLefth(root);
        int rt = findRighth(root);

        if(rt == lf) return (1<<lf)-1;
        else{
            return 1+countNodes(root->left)+countNodes(root->right);
        }
}

 int findLefth(TreeNode* node){
        int ht = 0;
        while(node){
            ht++;
            node = node->left;
        }
        return ht;
       }

  int findRighth(TreeNode* node){
        int ht = 0;
        while(node){
            ht++;
            node = node->right;
        }
        return ht;
    }

int main() {

  int a = countNodes(root);
  cout <<  a << endl;

    return 0;
}
    
