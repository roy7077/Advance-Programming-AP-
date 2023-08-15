#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

vector<int> missingNumbers(vector<int> arr, vector<int> brr) 
{
    map<int,int> mp;
    for(int i=0;i<brr.size();i++) mp[brr[i]]++;
    for(int i=0;i<arr.size();i++) mp[arr[i]]--;
    
    map<int,int>::iterator it;
    vector<int> result;
    for(it = mp.begin(); it != mp.end(); it++)
        if(it->second > 0) result.push_back(it->first);
    
    return result;
}

int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    
    int m;
    cin>>m;
    vector<int> b(m);
    for(int i=0;i<m;i++) cin>>b[i];
    
    vector<int> ans=missingNumbers(a,b);
    for(auto it:ans) cout<<it<<" ";
    cout<<endl;
}