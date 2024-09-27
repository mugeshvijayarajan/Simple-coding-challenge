//count of the given num
#include <iostream>

using namespace std;

int main()
{
    int n,count=0;
    cin>>n;
    while(n>0)
    {
        int ld=n%10;
        if(ld>=0)
        {
            count++;
        }
        n=n/10;
    }
    cout<<count;
    return 0;
}
