#include<bits/stdc++.h>

using namespace std;  // . . . Solved :) 

int main()
{
	int kites;
	cin>>kites;
	int x,y;
	
	while(kites--)
	{
		cin>>x>>y;
		int area=(x*y)/2;
		cout<<area<<" cm2\n";
	}
	
	return 0;
}
