#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>v1(n);
        vector<int>v2(n);
        for(int i=0; i<n; i++)
            cin>>v1[i];
        for(int i=0; i<n; i++)
            cin>>v2[i];
        vector<int>diff(n+5);
        diff[0]=v2[0];
        for(int i=1; i<n; i++)
        {
            diff[i]=max(diff[i-1],v2[i]);
        }
        int ans=0,total=0;
        for(int i=0; i<min(n,k);i++)
        {
            total+=v1[i];
            int r=k-(i+1);
            int p=total+r*diff[i];
            ans=max(ans,p);
        }
        cout<<ans<<endl;
    }
}
