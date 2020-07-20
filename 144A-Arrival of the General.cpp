#include<bits/stdc++.h>
using namespace std;

int main(){

int n,i,la=0,sm=101,sla,ssm;
cin>>n;
int arr[n];
for(i=0; i<n; i++){

    cin>>arr[i];
}

for(i=0; i<n; i++){

    if(arr[i]>la){
        la = arr[i];
        sla = i;
    }
    if(arr[i]<=sm){
        sm = arr[i];
        ssm = i;
    }
}

if(sla>ssm){
    ssm++;
}
n=n-1;

cout<<(sla+n)-ssm<<endl;

return 0;
}

//666Lucifer666
