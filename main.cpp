#include<iostream>
using namespace std;
bool prichk(int t)
{
    int i,stat;
    i=2;
    stat=0;
    for (i=2; i<t; i++)
    {
        stat=0;
        if (t%i != 0)
        {    
            stat=0;
            
        }
        else
        {
            stat=1;
            break;
        }
    }       
    if (stat==0)
        return true;
    else
        return false;
    
}
int main()
{
    bool q;
    int u,t;
    cin>>u;
    t=2;
    for (t=2; t<=u; t++)
    {
        q = prichk(t);
        if(q==true)
            cout<<t<<" ";
    }
    
}
