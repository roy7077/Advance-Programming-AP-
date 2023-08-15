#include <bits/stdc++.h>
using namespace std;

int minimumLoss(vector<long> price) 
{
    long ans=1e9;
    set<long> st;
    for(int i=0;i<price.size();i++) st.insert(price[i]);
    
    for(int i=0;i<price.size()-1;i++)
    {
        auto it=st.lower_bound(price[i]);
        long tmp=*it;
        if(it!=st.begin())
        {
            it--;
            long k=*it;
            ans=min(ans,abs(price[i])-k);
        }
        st.erase(tmp);
    }
    
    return ans;
}

int main()
{
    int n;
    cin>>n;
    
    vector<long> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    
    cout<<minimumLoss(a)<<endl;
    return 0;
}