#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define endl '\n'

int main()          // Solved  
{
    int c;
    cin>>c;
    while(c--)
    {
        int n;
        cin>>n;
        int ar[n],sum=0;
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
            sum=sum+ar[i];
        }
        float avg=sum/n;
        int a=0;
        for(int i=0; i<n; i++)
        {
            if(ar[i]>avg)
                a++;
        }
        float p=((float)a*100.0)/(float)n;
        cout<<fixed<<setprecision(3)<<p<<"%"<<endl;
    }

    return 0;
}