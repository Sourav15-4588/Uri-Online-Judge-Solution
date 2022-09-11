#include<bits/stdc++.h>
#include<math.h>
#include<iomanip>

using namespace std;

int main()
{
    int n, h, c, l;
    while(cin>>n>>h>>c>>l)
    {
        double l2=l/100.0;
        double c2=c/100.0;
        double h2=h/100.0;
        double arm = sqrt(pow(c2,2) + pow(h2,2));
        double area = arm * l2;
        double sarface_area = area * (double)n;
        cout<<showpoint<<fixed<<setprecision(4)<<sarface_area<<endl;
    }

    return 0;
}