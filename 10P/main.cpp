#include <iostream>

using namespace std;

int main()
{
    int s,e;
    int sum=0;
    cin>>s>>e;
    for(int i=s;i<=e;i++)
    {
        sum = sum + i;
    }
    cout<<sum;
    return 0;
}
