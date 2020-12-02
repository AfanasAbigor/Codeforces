#include<bits/stdc++.h>
using namespace std;

int main(){

string s,s1;
cin>>s>>s1;
int cnt=0;

reverse(s1.begin(),s1.end());


for(int j=0; j<s.size(); j++){

    if(s[j]==s1[j]){
        cnt++;
    }
}

if(cnt==s.size()){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}

return 0;
}
