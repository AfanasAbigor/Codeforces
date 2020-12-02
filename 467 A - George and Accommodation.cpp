#include<bits/stdc++.h>
using namespace std;


int main()
{

    int n,p,q,i,cnt=0;

    cin>>n;

    for(i=1; i<=n; i++)
    {
        cin>>p>>q;
        int x = q - p;

        if(x>=2)
        {
            if(x>0)
            {
                cnt++;
            }
        }
    }


    cout<<cnt<<endl;

    return 0;
}
