#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int getMedian2(vector<int> v)
{
    int n=v.size();
    int m=n/2;
    m--;
    if (n%2==1) 
        return v[m+1]*2;
    else 
        return v[m]+v[m+1];
}

int help(vector<int> expenditure, int d) {
    int n=expenditure.size();
    
    if (d==n) return 0;
    
    vector<int> pass(expenditure.begin(), expenditure.begin() + d);

    sort(pass.begin(), pass.end());
        
    int ret = 0;
    for (int i = d; i < n; i++) 
    {
        if (expenditure[i] >= getMedian2(pass)) 
        {
            ret++;
        }
        
        // update pass with binary search        
        pass.insert(upper_bound(pass.begin(), pass.end(), expenditure[i]), expenditure[i]);        
        pass.erase(lower_bound(pass.begin(), pass.end(), expenditure[i-d]));        
    }
        
    return ret;
}
int main()
{
    int n,d;
    cin>>n>>d;
    
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    
    cout<<help(v,d)<<endl;
    return 0;
}