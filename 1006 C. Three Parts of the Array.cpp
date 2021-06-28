#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l,n;
    cin>>n;
    int arr[n];

    for(l=0; l<n; l++)
    {
        cin>>arr[l];
    }

    long long sum1=0,sum3=0,ans=0;
    int i=0,j=n-1;


    while(i<=j)
    {

        if(sum1 <= sum3)
        {
            sum1 += arr[i++];

        }
        else
        {
            sum3 += arr[j--];

        }

        if(sum1 == sum3 )
        {
            ans = max(ans, sum1);
        }

    }

    cout<<ans<<endl;


    return 0;
}
