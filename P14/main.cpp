#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a=0,b=1,c;
    cout<<a<<" "<<b<<" ";
    for(int i=0;i<n-2;i++)
    {
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
    return 0;
}
