#include <bits/stdc++.h>
using namespace std;

#define ll long long
ll help(vector<ll>& arr,ll k) 
{
    unordered_map<ll,ll> m;
    ll count = 0;
    sort(arr.begin(), arr.end());
    
    for(int i=0; i<arr.size(); i++)
    {
        if(arr[i] <= k) m[arr[i]]++;
        else
        {
           if(m.find(arr[i]-k) != m.end()) count++;
           m[arr[i]]++;
        }
    }
    
    return count;
}
int main()
{
    ll n,k;
    cin>>n>>k;
    
    vector<ll> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    
    cout<<help(v,k)<<endl;
    return 0;
}
