#include <iostream>
using namespace std;

int main() {
    int a[21];

    for (int i = 0; i <= 20; i++) {
        a[i] = i;
    }
    a[0] = 0;
    a[1] = 0;
    for (int i = 2; i * i <= 20; i++) {
        if (a[i] != 0) {
            for (int j = i * 2; j <= 20; j += i) {
                a[j] = 0;
            }
        }
    }
    cout << "Prime numbers: ";
    for (int i = 2; i <= 20; i++) {
        if (a[i] != 0) {
            cout << a[i] << " ";
        }
    }

    return 0;
}