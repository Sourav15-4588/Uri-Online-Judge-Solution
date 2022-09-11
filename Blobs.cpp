#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        float food;
        int day=0;
        cin>>food;
        while(food>1)
        {
            food/=2;
            day++;
        }
        cout<<day<<" dias"<<endl;
    }

    return 0;
}