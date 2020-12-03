#include<bits/stdc++.h>
using namespace std;

int main(){

int t,n,i,j;

cin>>t;

for(j=1; j<=t; j++){

int first=0,second=0;
cin>>n;

for(i=1; i<n; i++){

    if(i<n/2){
        first = first + pow(2,i);
    }
    else{
        second = second + pow(2,i);
    }

}

first = first + pow(2,n);


cout<<first - second<<endl;


}

return 0;
}
