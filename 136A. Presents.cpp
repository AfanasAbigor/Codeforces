#include<bits/stdc++.h>
using namespace std;


int main()
{

    map <int, int> mp;
    map <int, int>::iterator it;


    int i,n,x;
    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>x;
        mp[x] = i+1;
    }



    for(it=mp.begin(); it!=mp.end(); it++)
    {

        cout<<it->second<<" ";

    }


    return 0;
}
