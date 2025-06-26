#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--) {
        int n, m, a, b;
        cin >> n >> m >> a >> b;

        long long cost = 0;

        while (n > m) {
            // If dividing will make n < m, we can't use it.
            // So we just subtract 1 until we reach m.
            if (n / 2 < m) {
                cost += (n - m) * 1LL * b;
                break;
            }

            //  Calculate how many subtract-1 steps are equivalent to one divide-by-2 step
            int subtract_steps = n - n / 2;

            // Compare the cost of subtracting vs dividing
            if (a < subtract_steps * 1LL * b) {
                // Divide is cheaper
                n /= 2;
                cost += a;
            } else {
                // Subtracting is cheaper or equal
                n -= subtract_steps;
                cost += subtract_steps * 1LL * b;
            }
        }

        cout << cost << endl;
    }

    return 0;
}




