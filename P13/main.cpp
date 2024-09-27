#include <iostream>

using namespace std;

int main()
{
    int n,rem,fact,ams=0;
    cin>>n;
    int num=n;
    while(n>0)
    {
       rem=n%10;
       fact=1;
       for(int i=rem;i>=1;i--)
       {
           fact=fact*i;
       }
       ams=ams+fact;
       n=n/10;
    }
    if(ams==num)
    {
        cout<<"strong number";
    }
    else
    {
        cout<<"Not a strong number";
    }
    return 0;
}