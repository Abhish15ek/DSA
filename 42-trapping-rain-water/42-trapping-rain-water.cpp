class Solution {
public:
    int trap(vector<int>& ht) {
        int n=ht.size();
        vector<int> left(n,0);
        vector<int> right(n,0);
        int mn=ht[0];
        for(int i=0;i<n;i++)
        {
            mn=max(mn,ht[i]);
            left[i]=mn;
        }
        mn=ht[n-1];
         for(int i=n-1;i>=0;i--)
        {
            mn=max(mn,ht[i]);
            right[i]=mn;
        }
         for(int i=0;i<n;i++)
        {
            left[i]=min(left[i],right[i]);
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans+=left[i]-ht[i];
        }
        return ans;
        
    }
};