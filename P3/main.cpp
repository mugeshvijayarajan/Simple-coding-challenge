//PS: display the great number among 3 num
#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b && a>c)
    {
        cout<<"greatest num"<<a;
    }
    else if(b>a && b>c)
    {
        cout<<"greatest num"<<b;
    }
    else{
        cout<<"greatest num"<<c;
    }
    return 0;
}
