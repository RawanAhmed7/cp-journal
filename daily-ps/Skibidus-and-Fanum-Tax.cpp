/*https://codeforces.com/contest/2065/problem/C1*/
#include <iostream>
#include <vector>
using namespace std;

bool can_sort(vector<int>& a, int b) {
    int n = a.size();
    for (int start = 0; start < 2; ++start) {
        int prev = (start == 0 ? a[0] : b - a[0]);
        bool ok = true;

        for (int i = 1; i < n; ++i) {
            int v1 = a[i];
            int v2 = b - a[i];

            bool can_continue = false;

            if (v1 >= prev && v2 >= prev) {
                prev = min(v1, v2);
                can_continue = true;
            } else if (v1 >= prev) {
                prev = v1;
                can_continue = true;
            } else if (v2 >= prev) {
                prev = v2;
                can_continue = true;
            }

            if (!can_continue) {
                ok = false;
                break;
            }
        }

        if (ok) return true;
    }

    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        int b;
        cin >> b;

        if (can_sort(a, b))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}

