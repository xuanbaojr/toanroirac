#include<iostream>
using namespace std;
int test(long long a, long long b)
{
    if (a>b) return test(b,a);
    if(a==0) return b;
    if(a%2==0 && b%2==0) return 2*test(a/2, b/2);
    if(a%2==0 && b%2!=0) return test(a/2,b);
    return test(a,b-a);
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<test(a,b);
}