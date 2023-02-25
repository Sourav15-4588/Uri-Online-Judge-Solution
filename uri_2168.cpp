#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()      // Solved
{
    int n;
    cin>>n;
    int ar[n+1][n+1];
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=n; j++)
        {
            cin>>ar[i][j];
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if((ar[i][j]+ar[i][j+1]+ar[i+1][j]+ar[i+1][j+1])>=2)
                cout<<"S";
            else cout<<"U";
        }
        cout<<endl;
    }

    return 0;
}

