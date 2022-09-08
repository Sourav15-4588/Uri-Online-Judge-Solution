#include<bits/stdc++.h>
#include<string.h>

using namespace std;   // . . . Solved :)  
#define endl '\n'

int main()
{
    int n;
    cin>>n;
    char a[1001], b[1001];

    while(n--)
    {
        getchar();
        cin>>a;
        getchar();
        cin>>b;

        int la=strlen(a)-1;
        int lb=strlen(b)-1;

        int k=la-lb;
        int flag=1;

        for(int i=k, j=0; i<=la, j<=lb; i++, j++)
        {
            if(a[i]!=b[j])
            { 
              flag=0;
              break;
            }
        }

        if(flag==1)
            cout<<"encaixa\n";
        else cout<<"nao encaixa\n";
    }
    return 0;
}
