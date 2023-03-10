#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> v(n+1);
    for (int i = 1; i <= n; i++)
        v[i] = i;
    while (m--)
    {
        int i, j;
        cin >> i >> j;
        reverse(v.begin()+i, v.end()-n+j);
    }
    for (int i = 1; i <= n; i++)
        cout << v[i] << ' ';
    return 0;
}