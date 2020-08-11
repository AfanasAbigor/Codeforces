#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum=0;
    string word;
    cin>>word;

    for(int i=0; i<word.size(); i++)
    {


        if(word[i]=='H' || word[i]=='Q' || word[i]=='9')
        {
            sum++;
            break;
        }
    }

    if(sum>0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}
//666Lucifer666
