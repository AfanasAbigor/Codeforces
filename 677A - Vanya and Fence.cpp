#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,h,i,cnt=0;
    cin>>n>>h;
    int a[n];

    for(i=0; i<n; i++)
    {

        cin>>a[i];

        if(a[i]>h)
        {
            cnt+=2;
        }
        else if(a[i]<=h)
        {
            cnt++;
        }
    }

    cout<<cnt<<endl;

    return 0;
}
