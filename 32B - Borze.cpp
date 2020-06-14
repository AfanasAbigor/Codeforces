#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
	
	string ter;
	cin>>ter; // (0 .) (1 -.)  (2 --)
	
	
	
	for(int i=0; i<ter.length(); i++){
	
	if(ter[i]=='.')
	{
		
		cout<<'0';
	}
		else if(ter[i+1]=='-'){
			
			cout<<'2';
			i++;
		}
		else{
			
			cout<<'1';
			i++;
		}
		
	}
	
	cout<<"\n";
	
	
	
	return 0;
}

//666Lucifer666
