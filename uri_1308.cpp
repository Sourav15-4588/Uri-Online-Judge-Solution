// # URI 1308 Etruscan Warriors Never Play Chess  
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()    // TLE
{
    int t;
    cin>>t;
    long long n;
    while(t--)
    {
        cin>>n;
        int i=1;
        long long sum=0;
        while(true)
        {
            sum=i*(i+1)/2;
            if(sum>n)
            {
                i--;
                break;
            }  
            i++;
        }
        cout<<i<<endl;
    }

    return 0;
}