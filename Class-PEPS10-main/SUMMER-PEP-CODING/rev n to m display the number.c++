#include<iostream>
using namespace std;

int main()
{
    int n, m;
    cout<<"Enter two numbers ";
    cin>>n>>m;
    for(int i=m; i>=n; i--)
        cout<<i<<" ";
    cout<<endl;
    return 0;
}