#include<iostream>
using namespace std;

int main()
{
    int n;
    float sum = 0.0;
    cout<<"Enter a number ";
    cin>>n;
    for(int i=1; i<=n; i++)
        sum += (float)i/(i+1);
    cout<<"Sum of series is "<<sum<<endl;
    return 0;
}