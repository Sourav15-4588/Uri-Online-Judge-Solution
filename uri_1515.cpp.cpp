#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	while(cin>>n && n)
	{
		string name[n], st;
		int yr[n], tm[n], m=100000;
		for(int i=0; i<n; i++){
			cin.ignore();
			cin>>name[i]>>yr[i]>>tm[i];
			int a=yr[i]-tm[i];
			if(a < m){
				m=a;
				st=name[i];
			}
		}
		cout<<st<<endl;
	}
	
	return 0;
}