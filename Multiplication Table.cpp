#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    long long int i=1,j,k=1,n,m,temp,count=0;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        if(m%i==0 && (m/i)<=n)
           count++;
    }
    cout<<count;

}
