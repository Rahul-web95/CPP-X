#include<iostream>
using namespace std;

int main()
{
    int n, a = 0, b = 1, c;
    cout << "Enter a number ";
    cin >> n;
    cout << "Fabcacci series is ";
    for (int i = 1; i <= n; i++) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
    cout << endl;
    return 0;
}