#include<bits\stdc++.h>
using namespace std;
bool Prime(int x){
	int sum=0;
	for(int j=1; j<=x; j++){
		
		if(x%j==0){
			sum++;
		}	
	}
	
	if(sum<=2){
		return true;
	}
	else if(sum>2){
		return false;
	}
}

int main(){
	
	int n,m,temp;
	cin>>n>>m;
	
	for(int i=n+1; i<=m; i++){
		
		if(Prime(i)==true){
			
			temp = i;
			break;
		}
		
	}
	
	if(temp==m){
		cout<<"YES"<<endl;
		
	}
	else{
		cout<<"NO"<<endl;
	}
	
	return 0;
}
