#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t,i;
    cin>>t;

    for(i=0; i<t; i++)
    {
        ///****************************************************************************


        int n,l,j,counter = 1;
        string st;
        cin>>n>>st;

        vector<char> vec;

        for(l=0; l<st.size(); l++)
        {
            if(st[l] == st[l+1])
            {
                continue;
            }
            else if (st[l] != st[l+1])
            {
                vec.push_back(st[l]);
            }
        }




        for(l=0; l<vec.size(); l++)
        {
            for(j=l+1; j<vec.size(); j++)
            {
                if(vec[l]==vec[j])
                {
                    counter = 0;
                    break;
                }
            }
        }

        if(counter == 1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        ///***************************************************************************

    }
    return 0;
}
