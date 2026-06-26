#include<iostream>
using namespace std;

int main()
{
    float p, r, t;
    cout << "Enter principal amount, rate of interest and time ";
    cin >> p >> r >> t;
    float ci = p * (1 + r / 100) * (1 + r / 100) - p;
    cout << "Compound interest is " << ci << endl;
    return 0;
}
