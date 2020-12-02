#include<bits/stdc++.h>
using namespace std;

int main()
{


    int x=0,n,i=0,p=0;
    int arr[]= {5,4,3,2,1};

    cin>>n;


    if(n%5==0)
    {
        x=n/5;
    }

    else
    {
        x = (n/5)+1;
    }

    cout<<x<<endl;

    return 0;
}
