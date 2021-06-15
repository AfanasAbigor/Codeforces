#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,i;
    cin>>n;
    int arr[n],mr_bool = 0;

    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(i=0; i<n; i++)
    {
        if(arr[i]==1)
        {
            cout<<"HARD"<<endl;
            mr_bool++;
            break;
        }
    }

    if (mr_bool == 0)
    {
        cout<<"EASY"<<endl;
    }

    return 0;
}
