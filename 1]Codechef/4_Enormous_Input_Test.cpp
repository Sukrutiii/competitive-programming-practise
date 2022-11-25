#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int sum = 0;
        while (n != 0)
        {
            int r = n % 10;
            sum += r;
            n /= 10;
        }

        cout << sum << endl;
    }
    return 0;
}