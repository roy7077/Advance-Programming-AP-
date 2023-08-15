#include <bits/stdc++.h>
using namespace std;

pair<int,int> compareTriplets(vector<int> a, vector<int> b) {
      
    int cnt1=0;
    int cnt2=0;
    
    for(int i=0;i<3;i++)
    {
        if(a[i]>b[i])
        cnt1++;
        else if(b[i]>a[i])
        cnt2++;
    }
    
    return {cnt1,cnt2};
}

int main()
{
    vector<int> a(3);
    vector<int> b(3);
    
    for(int i=0;i<3;i++) cin>>a[i];
    for(int i=0;i<3;i++) cin>>b[i];
    
    pair<int,int> p=compareTriplets(a,b);
    cout<<p.first<<" "<<p.second<<endl;
    
    return 0;
}