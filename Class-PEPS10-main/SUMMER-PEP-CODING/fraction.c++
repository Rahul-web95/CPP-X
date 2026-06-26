#include<iostream>
using namespace std;

int main()
{
    float sum = 0;
    for(int i = 1; i <= 9; i++)
    {
        sum += (float)i/(i+1);
    }
    cout << sum;
    return 0;
}