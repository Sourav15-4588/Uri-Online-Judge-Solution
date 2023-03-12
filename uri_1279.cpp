#include<bits/stdc++.h>
#include<string.h>
using namespace std;
#define endl '\n'

int numeric(string s){
    long long l=s.length();
    cout<<"STRING "<<s<<endl;
    long long dig, ar[l], sum=0;
    for(int i=0; i<l; i++)
    {
        ar[i]=s[i]-'0';
    }
    for(int i=l-2, j=1; i>=0; i--)
    {
        long long p=pow(10,j);
        cout<<p<<" ";
        dig=ar[i]*p;
       
        cout<<dig<<" ";
        sum=sum+dig;
        j=j+1;
    }
    sum=sum+ar[l-1];
    
    return sum;
}

int main()    // NOT Solved 
{
    string y;
    while(cin>>y)
    {
        long long yr=numeric(y);
        int flag=0;
        cout<<yr<<" ";
        if(yr%4==0 && (yr%100!=0 || yr%400==0)){
            cout<<"This is leap year."<<endl;
            ++flag;
        }
            
        if(yr%15==0){
            cout<<"This is huluculu festival year."<<endl;
            ++flag;
        }
            
        if(yr%55==0){
             cout<<"This is buluculu festival year."<<endl;
            ++flag;
        }

        if(flag<=0)
        {
             cout<<"This is an ordinary year."<<endl;
        }
        cout<<endl;
    }

    return 0;
}





