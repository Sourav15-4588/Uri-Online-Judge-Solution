#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, m;
    while(cin>>n>>m)
    {
        long long int result;
        if(n<m)
        result=m-n;
        else
        result=n-m;
        cout<<result<<endl;
    }

    return 0;
}