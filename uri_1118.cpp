#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()    // Solved 
{
    double a, b;
    int x;
    level:
    cin>>a;
    if(a<0.0 || a>10.0)
    {
        cout<<"nota invalida"<<endl;
        goto level;
    }

    label:
    cin>>b;
    if(b<0.0 || b>10.0)
    {
        cout<<"nota invalida"<<endl;
        goto label;
    }
    
    double m=(a+b)/2.0;
    cout<<"media = "<<fixed<<setprecision(2)<<m<<endl;
    lbl:
    cout<<"novo calculo (1-sim 2-nao)"<<endl;
    cin>>x;
    if(x==1)
        goto level;
    else if(x==2)
        return 0;
    else {
         goto lbl;
    }    

}
