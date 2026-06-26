#include <iostream>
using namespace std;

int n = 3;

bool findPath(int a[3][3], int i, int j, int x, int y) {
    if (i < 0 || j < 0 || i >= n || j >= n || a[i][j] == 0)
        return false;

    if (i == x && j == y)
        return true;

    a[i][j] = 0; 

    return findPath(a, i+1, j, x, y) ||  
           findPath(a, i, j+1, x, y) ||
           findPath(a, i-1, j, x, y) ||  
           findPath(a, i, j-1, x, y);    
}

int main() {
    int a[3][3] = {
        {1,1,0},
        {1,1,1},
        {0,1,1}
    };

    if (findPath(a, 0, 0, 2, 2))
        cout << "Path exists";
    else
        cout << "No path";

    return 0;
}