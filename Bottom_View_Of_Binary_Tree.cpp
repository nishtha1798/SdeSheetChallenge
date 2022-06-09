/*************************************************************
 
    Following is the Binary Tree node structure.

    class BinaryTreeNode 
    {
    public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/
void printBottom(BinaryTreeNode<int>* root, int dist, int level,map<int,pair<int,int>> &mp)
{
    if(root==NULL)
    {
        return;
    }
    if(level>=mp[dist].second)
    {
        mp[dist]={root->data,level};
    }
    printBottom(root->left,dist-1,level+1,mp);
    printBottom(root->right,dist+1,level+1,mp);
}
vector<int> bottomView(BinaryTreeNode<int> * root){
    map<int,pair<int,int>> mp;
    printBottom(root,0,0,mp);
    vector<int> ans;
    for(auto it:mp)
    {
        ans.push_back(it.second.first);
    }
    return ans;
}
