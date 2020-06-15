#include<bits\stdc++.h>
#include<string>
using namespace std;

int main(){
	
	int cut=0,put=0,i;
	string s,s1;
	cin>>s;
	
	for(i=0; i<s.size(); i++){
		
		if(s[i]>='a' && s[i]<='z'){
		
		cut++;
			
			
		}
		
		else if(s[i]>='A' && s[i]<='Z'){
			
			put++;
		}
		
	}
	
	
if(cut>put || cut==put){
	
	for(i=0; i<s.size(); i++){
		
		s[i]=tolower(s[i]);
		
	}
	cout<<s<<endl;
}

if(cut<put){
	
for(i=0; i<s.size(); i++){
		
		s[i]=toupper(s[i]);
		
	}
	cout<<s<<endl;	
}
	
	
	return 0;
}
