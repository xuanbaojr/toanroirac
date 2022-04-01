#include <bits/stdc++.h>
using namespace std;
void solve(int x, string s)
{
    if (x % 2)
        solve(x - 1, s);
    else
    {
        cout << s << '\n';
        if (x == 0)
            return;
        solve(x - 2, '0' + s + '1');
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int x;
    cin >> x;
    solve(x, "");
    return 0;
}