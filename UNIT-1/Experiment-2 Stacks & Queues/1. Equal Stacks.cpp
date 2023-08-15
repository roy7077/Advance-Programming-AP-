int equalStacks(vector<int> h1, vector<int> h2, vector<int> h3) {

    map<int,int> m1,m2;
    int sum=0;
    
    for(int i=h1.size()-1;i>=0;i--)
    {
        sum+=h1[i];
        m1[sum]=1;
    }

    sum=0;
    for(int i=h2.size()-1;i>=0;i--)
    {
        sum+=h2[i];
        m2[sum]=1;
    }
    
    sum=0;
    int ans=0;
    for(int i=h3.size()-1;i>=0;i--)
    {
        sum+=h3[i];
        if(m1.count(sum) && m2.count(sum))
        ans=max(ans,sum);
    }
    
    return ans;
}