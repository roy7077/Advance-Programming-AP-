#include <vector>
#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int index;
        cin>>index;
        
        int n1;
        cin>>n1;
        
        vector<int> a(n1);
        for(int i=0;i<n1;i++)
        {
            cin>>a[i];
        }
        
        int n2;
        cin>>n2;
        
        vector<int> b(n2);
        for(int i=0;i<n2;i++)
        {
            cin>>b[i];
        }
        
        cout<<a[index]<<endl;
        
    }
    return 0;
}
