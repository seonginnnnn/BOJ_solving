#include <iostream>
#include <string>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string a;
        cin >> a;
        cout << a[0];
        cout << a[a.length()-1] << endl;
    }
}