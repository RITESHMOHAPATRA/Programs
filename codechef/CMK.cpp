#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,k;
        cin>>n>>k;
        int c[n],w[n];
        for(int j=0;j<n;j++)
            cin>>w[j];
        for(int j=0;j<n;j++)
            cin>>c[j];
        sort(c,c+n,greater<int>());
        sort(w,w+n,greater<int>());
        int q=0,j=0,t=0;
        while(q<n && j<n)
        {
            if(c[q]>w[j])
            {
                t++;
                q++;
                j++;
            }
            else
            {
                j++;
            }
        }
        if(t>=k)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
