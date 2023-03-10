#include <iostream>
using namespace std;
int a[101];
int n, m;
int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        a[i] = i;
    while(m--)
    {
        int i, j, temp;
        cin >> i >> j;
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << ' ';
    }
    return 0;
}