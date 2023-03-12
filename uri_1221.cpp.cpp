#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		long long num;
		cin>>num;
		bool f=true;
		for(int i=2; i<=sqrt(num); i++)
		{
			if(num%i==0){
			cout<<"Not Prime"<<endl;
			f=false;
			break;
			}
		}
		if(f==true) cout<<"Prime"<<endl;
	}
    return 0;
}