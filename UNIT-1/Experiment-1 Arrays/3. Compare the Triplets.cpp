vector<int> compareTriplets(vector<int> a, vector<int> b) {
      
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