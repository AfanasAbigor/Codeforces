#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;

bool myfunc(int a, int b)
{
    return a>b;
}

int main()
{

    int n,i,a,p=0,t=0,k=0,x=0;
    cin>>n;

    vector <int> vec;

    for(i=1; i<=n; i++)
    {

        cin>>a;
        t=t+a;
        vec.push_back(a);

    }

    sort(vec.begin(),vec.end(),myfunc);


    for(i=0; i<n; i++)
    {

        if(k>t)
        {
            break;
        }
        else
        {
            k+=vec[i];
            x++;
            t-=vec[i];
        }

    }

    cout<<x<<endl;

    return 0;
}
