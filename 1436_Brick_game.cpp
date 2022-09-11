#include<bits/stdc++.h>

using namespace std;   // . . . Solved :)
#define endl '\n'

int main()
{
    int t;
    cin>>t;
    for(int c=1; c<=t; c++)
    {
        int n;
        cin>>n;
        int age[n];
        for(int i=0; i<n; i++)
        {
            cin>>age[i];
        }
        int cap=(n/2);

        cout<<"Case "<<c<<": "<<age[cap]<<endl;
    }
    return 0;
}
