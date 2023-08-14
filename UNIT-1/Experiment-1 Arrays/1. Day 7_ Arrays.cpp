#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    
    int i=0;
    int j=n-1;
    while(i<=j)
    {
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        j--;
        i++;
    }
    
    for(auto it:v)
    cout<<it<<" ";
    cout<<endl;
    
    return 0;
}