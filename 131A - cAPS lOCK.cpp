#include<bits/stdc++.h>
using namespace std;

int main()
{

    int i,j,up=0,low=0,str=0;
    string s;
    cin>>s;

    str = s.size();

    for(i=0; i<s.size(); i++)
    {

        if(s[i]>='A' && s[i]<='Z')
        {

            up++;
        }
        else if(s[i]>='a' && s[i]<='z')
        {

            low++;
        }

    }



    if(up==str)
    {

        for(i=0; i<s.size(); i++)
        {
            s[i]=s[i] + 32 ;
        }
        cout<<s<<endl;
    }


    else if(s[0]>='a' && s[0]<='z')
    {

        if(low==1)
        {

            s[0] = s[0] - 32 ;
            for(i=1; i<str; i++)
            {
                s[i]=s[i] + 32;
            }
            cout<<s<<endl;
        }

        else if(s[0]>='a' && s[0]<='z')
        {

            if(low>1)
            {
                cout<<s<<endl;
            }
        }

    }



    else
    {

        cout<<s<<endl;
    }

    return 0;
}
