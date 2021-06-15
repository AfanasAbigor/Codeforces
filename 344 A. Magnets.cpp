#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,sum=1;
    cin>>n;
    string arr[n];

    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }


    for(i=0; i<n-1; i++)
    {

        if (arr[i] != arr[i+1])

        {
            sum++;

        }
    }


    cout<<sum<<endl;

    return 0;
}
