int uniqueElement(vector<int> arr, int n)
{
	// Write your code here
    int x=arr[0];
    for(int i=1;i<n;i++)
    {
        x=x^arr[i];
    }
    return x;
}
