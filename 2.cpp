#include<iostream>
using namespace std;
int test(string s, int i)
{   
    if(i==1) return s[0]-48;
    return (s[i-1] - 48 ) + test(s,i-1);
}

int main()
{
    string s;
    cin>>s;
    cout<<test(s,s.size());
}