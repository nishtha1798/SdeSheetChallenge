/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

vector<int> getLeftView(TreeNode<int> *root)
{
    //    Write your code here
    if(!root)
    {
        return {};
    }
    queue<TreeNode<int>*> q;
    q.push(root);
    vector<int> ans;
    while(!q.empty())
    {
        int n=q.size();
        
        for(int i=0;i<n;i++)
        {
            auto it=q.front();
        q.pop();
            if(i==0)
            {
                ans.push_back(it->data);
            }
            if(it->left!=NULL)
            {
                q.push(it->left);
            }
            if(it->right!=NULL)
            {
                q.push(it->right);
            }
        }
    }
    
    return ans;
    
}