#include<bits\stdc++.h>
#include<string>
using namespace std;

int main(){
	
	string n;
	cin>>n;
	int sum = 0;
	int len = n.size();
	
	for(int i=0; i<len; i++){
		
		if(n[i]=='4'||n[i]=='7'){
			
			sum++;
			
			}
		}
		
	
	
	
	if( sum==7 || sum==4 ){
		
		cout<<"YES"<<endl;
	}
	else {
		
		cout<<"NO"<<endl;
	}
	
	return 0;
}
