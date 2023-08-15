#include <bits/stdc++.h>
using namespace std;

int help(vector<vector<int>>& pp) 
{
    int n = pp.size();
    for (int i=0;i<n;i++)
    {
        int p=0;
        int ind=i;
        if (pp[i][0] < pp[i][1])
            continue;
            
        while(1)
        {
            p+=pp[ind][0];
            p-=pp[ind][1];
            if(p<0)
                break;
            ind=(ind+1)%n;
            if(ind==i)
                break;
        }
        if(ind==i)
            return i;
    }
    return -1;
}

int main()
{
    int n;
    cin>>n;
    
    vector<vector<int>> v(n,vector<int>(2));
    for(int i=0;i<n;i++) cin>>v[i][0]>>v[i][1];
    
    cout<<help(v)<<endl;
    return 0;
}