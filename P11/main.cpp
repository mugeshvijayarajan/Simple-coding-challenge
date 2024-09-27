#include <iostream>

using namespace std;

int main()
{
    int n,div=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            div++;
        }
    }
    if(div==2)
    {
        cout<<"prime";
    }
    else
    {
        cout<<"Not a prime";
    }
    return 0;
}
