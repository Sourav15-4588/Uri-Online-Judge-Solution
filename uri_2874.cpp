// # URI 2874 Binary Phrase 

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void bin(int n)    // Solved 
{
    int num=n;
    int dec=0;
 
    int base=1;
 
    int temp=num;
    while(temp){
        int rem=temp%10;
        temp=temp/10;
 
        dec+= rem*base;
        base=base*2;
    }
    cout<<char(dec);
}

int main()
{
    int N;
   while(cin>>N)
   {
       for(int k=0; k<N; k++)        {      	
        	long int n;           
            cin>>n;
            bin(n); 
        }
        cout<<endl;
    }
}