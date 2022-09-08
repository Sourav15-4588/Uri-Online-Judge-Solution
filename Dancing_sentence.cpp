#include<bits/stdc++.h>
#include<string.h>
using namespace std;
#define endl '\n'

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);

	string st;

	while(getline(cin, st)) {
		int l=st.length();
		int c=0;
		for(int i=0; i<l; i++)
		{
			if((st[i]>='a' && st[i]<='z') || (st[i]>='A' && st[i]<='Z'))
			{
				if(c%2==0) {
					if(st[i]>='a' && st[i]<='z') {
					st[i]=st[i]-32;
					}
				}
				else if(c%2!=0) {
					if(st[i]>='A' && st[i]<='Z') {
						st[i]+=32;
					}
				}
				c++;
			}
		}
		for(int i=0; i<l; i++)
		{
			cout<<st[i];
		}
		cout<<endl;
	}
	return 0;
}

