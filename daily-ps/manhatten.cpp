#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<string> grid(n);
        for (int i = 0; i < n; ++i)
            cin >> grid[i];

        int min_sum = 1e9, max_sum = -1e9;
        int min_diff = 1e9, max_diff = -1e9;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (grid[i][j] == '#') {
                    int sum = i + j;
                    int diff = i - j;
                    if (sum < min_sum){ min_sum = sum;}
                    if (sum > max_sum){ max_sum = sum;}
                    if (diff < min_diff) {min_diff = diff;}
                    if (diff > max_diff) {max_diff = diff;}
                }
            }
        }

        int h = (min_sum + max_sum + min_diff + max_diff) / 4;
        int k = (min_sum + max_sum - min_diff - max_diff) / 4;

        cout << (h + 1) << " " << (k + 1) << "\n";
    }
    return 0;
}
