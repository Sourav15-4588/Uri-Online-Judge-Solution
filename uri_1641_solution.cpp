#include<bits/stdc++.h>
#include<math.h>

using namespace std;

int main()   // . . . solved :)  
{
    int r, w, l, c=1;
    while(1)
    {
        cin>>r;
        if(r==0) break;
        cin>>w>>l;
        cout<<"Pizza "<<c;
        double digon=sqrt(pow(w,2) + pow(l,2));
        if(digon<=r*2)
            cout<<" fits on the table.\n";
        else cout<<" does not fit on the table.\n";
        c++;    
    }

    return 0;
}
