#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int x;
	cin>>x;
	
	for(;;)
	{
		
		x++;
		
	int a = (x/1000);
	int b = (x/100)%10;
	int c = (x/10)%10;
	int d = x%10;
	
	if(a==b || a==c || a==d || b==c || b==d || c==d)
	{
		
		continue;
	}	
	
	else
	{
		cout<<x<<endl;
		break;
		
		}	
		
	}
		

	return 0;
}
