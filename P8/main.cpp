#include <iostream>

using namespace std;

int main()
{
    int n;
    int sum=0,remainder;
    cin>>n;
    while(n>0)
    {
        remainder=n%10;
        sum+=remainder;
        n=n/10;
    }
    cout<<sum;
    return 0;
}
