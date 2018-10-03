#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char top[3],bottom[3];
        cin>>top;
        cin>>bottom;
        int ntb=0,nto=0,ndb=0,ndo=0;
        for(int i=0;i<3;i++)
        {
            if(top[i]=='o')
                nto++;
            else if(top[i]=='b')
                ntb++;
            if(bottom[i]=='o')
                ndo++;
            else if(bottom[i]=='b')
                ndb++;
        }
        if((ndb>=2 || ntb>=2) && (nto>=1 || ndo>=1))
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
}
