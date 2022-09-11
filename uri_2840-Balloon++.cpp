#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long int radias, gas;
	cin>>radias>>gas;
	long long int volume=3.1415*radias*radias*radias*4/3;
	int balloon=gas/volume;
	cout<<balloon<<endl;
	
	return 0;
}