#include<bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{

int n,a,b,l=0,f=0,i;

cin>>n;
for(i=1; i<=n; i++){
    cin>>a>>b;
    l+=a;
    f+=b;
}

cout<<min(l,n-l) + min(f,n-f)<<endl;


    return 0;
}
//666Lucifer666
