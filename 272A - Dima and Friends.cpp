#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{

    int n,in,i,sum=0,p=0;
    cin>>n;
    vector <int> vec;

    for(i=0; i<n; i++)
    {
        cin>>in;
        vec.push_back(in);
        sum+=vec[i];
    }

    int v=n+1;

    for(i=1; i<=5; i++)
    {
        if((sum+i)%v!=1)
        {
            p++;
        }

    }
    cout<<p<<endl;

    return 0;
}
//666Lucifer666
