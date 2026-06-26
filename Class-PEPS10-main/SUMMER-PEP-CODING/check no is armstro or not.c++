#include<iostream>
using namespace std;

int main()
{
    int n, sum = 0, temp;
    cout << "Enter a number ";
    cin >> n;
    temp = n;
    while (temp > 0) {
        int r = temp % 10;
        sum += r * r * r;
        temp /= 10;
    }
    if (sum == n)
        cout << n << " is an armstrong number" << endl;
    else
        cout << n << " is not an armstrong number" << endl;
    return 0;
}