#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    double sum = 0; 
    int sumth1 = 0;
    int sumth2 = 0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum = sum + a[i];
    }
    sort(a,a+n);
    double sum1 = sum/2;
    for(int i=0;i<n;i++)
    {
        sumth1 = sumth1 + a[i];
        if(sumth1>=sum1) 
        {
            sumth1 = 2*sumth1 - sum;
            break;
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        sumth2=  sumth2 + a[i];
        if(sumth2>=sum1) 
        {
            sumth2 = 2*sumth2 - sum;
        }
    }
    if(sumth1>=sumth2)  cout<<sumth2;
    else cout<<sumth1;
    cout<<sum<<sum1<<sumth1<<sumth2;
}