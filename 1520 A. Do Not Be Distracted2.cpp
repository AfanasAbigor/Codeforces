#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,i,j,counter = 1;
        string s;
        cin>>n>>s;

        map <char, int> mp;

        for(i=0; i<n; i++)
        {

            mp[s[i]]++;

            if(mp[s[i]]>1 && s[i] != s[i-1])
            {
                counter = 0;
                break;
            }

        }

        if (counter == 0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }

    }


    return 0;
}
