#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,pp=0;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int max=arr[0];
    int min=arr[0];

    for(int i=1; i<n; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
            pp++;
        }
        if(arr[i]<min)
        {
            min=arr[i];
            pp++;
        }
    }

    cout<<pp<<endl;
    return 0;
}
//666Lucifer666
