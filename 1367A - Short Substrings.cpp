#include<iostream>
#include<string>
using namespace std;

int main(){
	
	string s;
    int t;
    cin>>t;
    for(int i=1; i<=t; i++){
    	
    cin>>s;
	
	if(s.size()==2){
		
		cout<<s<<endl;
	}
    	
    else{
    	
    	cout<<s[0];
    	
    	for(int j=1; j<s.size(); j+=2){
    		
    		cout<<s[j];
		}
    	cout<<endl;
	}	
    	
    	
    	
    	
	}

	return 0;
	
}
