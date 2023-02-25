#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main()               // Solved Pascal triangle 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ar[n+1][n+1];
        for(int i=0; i<=n; i++)
        {
            for(int j=0; j<=i; j++)
            {
                if(j==0) ar[i][j]=1;
                else if(j==i) ar[i][j]=1;
                else
                    ar[i][j]=ar[i-1][j-1]+ar[i-1][j];
            }
        }
        
        // for(int i=0; i<=n; i++)
        // {
        //     for(int j=0; j<=i; j++){
        //         cout<<ar[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }

        ll sum=0;
        for(int j=0; j<n; j++)
        {
            sum=sum+ar[n][j];
        }
        cout<<sum<<endl;
        
    }

    return 0;
}





