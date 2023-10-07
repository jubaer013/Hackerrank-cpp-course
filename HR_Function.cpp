#include<bits/stdc++.h>
using namespace std;
void maximum(int a, int b,int c,int d)
{
    int temp = a;
   
    if (b>temp)
    {
        temp=b; 
    }
    if(c>temp)
    {
        temp=c;
    }
     if(d>temp)
    {
        temp=d;
    }
    cout<<temp<<endl;
    

};

int main()
{
     int p,q,r,s,a,b,c,d;
     cin >>a>>b>>c>>d;
     maximum(a,b,c,d);
     return 0;
 
    
}