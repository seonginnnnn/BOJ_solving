#include <iostream>
using namespace std;
int a[101];
int n, m;
int main() {
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int x,y,z;
        cin >> x >> y >> z;
        for (int j = x; j <= y; j++)
        {
            a[j] = z;
        }
    }
    for (int k = 1; k <= n; k++)
    {
        cout << a[k] << ' ';
    }
}