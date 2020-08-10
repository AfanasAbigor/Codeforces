#include<bits/stdc++.h>

using namespace std;
int main()
{

    int n,k,l,c,d,p,nl,np,td,ls,ts,tsort;

    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    td = k*l;

    ls = (c*d)/n;
    ts = (p/np)/n;
    tsort = (td/nl)/n;

    if(ls<=ts && ls<=tsort)
    {
        cout<<ls<<endl;
    }
    else if(ts<=ls && ts<=tsort)
    {
        cout<<ts<<endl;
    }
    else if(tsort<=ls && tsort<=ts)
    {
        cout<<tsort<<endl;
    }

    return 0;
}
//666Lucifer666
