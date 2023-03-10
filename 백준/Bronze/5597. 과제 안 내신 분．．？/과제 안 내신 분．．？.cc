#include <iostream>
using namespace std;
int a[30];
int b = 28;
int main() {
    while(b--)
    {
        int i;
        cin >> i;
        a[i] = 1;
    }
    for (int i = 1; i <= 30; i++)
    {
        if (a[i] == 0)
            cout << i << ' ';
    }
    return 0;
}