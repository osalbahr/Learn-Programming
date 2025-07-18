#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int ans = abs(v[0]);
    for (int i = 1; i < n; i++)
        ans = min(ans, abs(v[i]));

    cout << ans << endl;
}
