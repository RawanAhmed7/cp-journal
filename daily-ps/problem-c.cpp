// https://codeforces.com/contest/2044/problem/C
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--) {
        int m, a, b, c;
        cin >> m >> a >> b >> c;

        int row1 = 0, row2 = 0;


        if (a >= m) {
            row1 = m;
        } else {
            row1 = a;
        }

        if (b >= m) {
            row2 = m;
        } else {
            row2 = b;
        }

        int free_row1 = m - row1;
        int free_row2 = m - row2;
        int total_free = free_row1 + free_row2;
        int used_c = min(c, total_free);


        int total = row1 + row2 + used_c;

        cout << total << endl;
    }

    return 0;
}




