#include<bits/stdc++.h>
using namespace std;

int main()
{

int i,n,cnt=0,one=0,two=0,three=0,four=0;
cin>>n;
int arr[n];
for(i=0; i<n; i++){
        cin>>arr[i];

    if(arr[i]==1){
        one++;
    }
    if(arr[i]==2){
        two++;
    }
    if(arr[i]==3){
        three++;
    }
    if(arr[i]==4){
        four++;
    }

}

//*************************************************************************
cnt = four;
//*************************************************************************
while(three!=0 && one!=0){
    three-=1;
    one-=1;
    cnt++;
}

if(one==0 && three!=0){
    cnt+=three;
    three = 0;
}
//*************************************************************************

cnt = cnt + two/2;

if(two%2!=0){

    if(one<=2){
        one = 0;
        two = 0;
        cnt ++;
    }
    else{
        one = one -2 ;
        two = 0;
        cnt ++;
    }
}


//****************************************************************************
if (one!=0){
    cnt=cnt+ one/4;
    if(one%4!=0)
    {
    cnt=cnt+1;
    }
}
//*****************************************************************************

cout<<cnt<<endl;
    return 0;
}
