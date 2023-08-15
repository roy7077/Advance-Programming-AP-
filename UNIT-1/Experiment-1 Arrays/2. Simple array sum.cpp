#include <bits/stdc++.h>
using namespace std;

int simpleArraySum(vector<int>& ar) 
{
    
    int sum=0;
    for(auto it:ar)
    sum+=it;
    
    return sum;
}

int main()
{
    int n;
    cin>>n;
    
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    
    cout<<simpleArraySum(v)<<endl;
    return 0;
}