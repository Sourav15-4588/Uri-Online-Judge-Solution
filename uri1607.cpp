#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()       //Solved 
{
	int n;
	cin>>n;
	cin.ignore();
	string a, b;
	while(n--)
	{
		cin>>a>>b;
		long long l=a.length();
		int c=0;
		for(int i=0; i<l; i++)
		{
			if(a[i]==b[i])
			{
				c=c+0;
			}
			else if(a[i]>b[i])
			{
				c=c+(26-(a[i] - b[i]));
			}
			else c=c+(b[i] - a[i]);
		}
		cout<<c<<endl;
	}

	return 0;
}


// // URI 1414 World Cup

// #include<bits/stdc++.h>
// using namespace std;
// #define endl '\n'

// int main()                     //  Not Solved Yet
// {
// 	int t, n;
// 	string team;

// 	while(true)
// 	{
// 		cin>>t>>n;
// 		if(t==0 && n==0) break;
// 		int p[n], c=3*n, sum=0;
// 		for(int i=0; i<n; i++)
// 		{
// 			cin>>team>>p[i];
// 			c=p[i]%3;
// 			sum=sum+c;
// 		}
// 		cout<<sum<<endl;

// 	}

// 	return 0;
// }