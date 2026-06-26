#include<iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter a number ";
    cin >> n;
    while (n > 9) {
        sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        n = sum;
    }
    cout << "Single digit is " << n << endl;
    return 0;
}