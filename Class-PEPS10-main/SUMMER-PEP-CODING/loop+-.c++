#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        if(i % 2 == 1)
            sum += i;
        else
            sum -= i;
            
        if(i == n)
        {
            cout << i << " = ";
        }
        else if(i % 2 == 1)
        {
            cout << i << " - ";
        }
        else
        {
            cout << i << " + ";
        }
    }
    cout << sum;
    return 0;
}