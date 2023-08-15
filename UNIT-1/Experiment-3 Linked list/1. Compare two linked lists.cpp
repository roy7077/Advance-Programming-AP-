#include <vector>
#include <iostream>
using namespace std;


int main() {
    
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        
        int m;
        cin>>m;
        vector<int> b(m);
        
        for(int i=0;i<m;i++)
        {
            cin>>b[i];
        }
        
        if(n!=m)
        {
            cout<<"0"<<endl;
            continue;
        }
        
        bool flag=1;
        for(int i=0;i<n;i++)
        {
            if(a[i]!=b[i])
            {
                cout<<"0"<<endl;
                flag=0;
                break;
            }
        }
        
        if(flag)
        cout<<"1"<<endl;
    }
    return 0;
}
