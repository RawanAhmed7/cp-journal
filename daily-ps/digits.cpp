// https://codeforces.com/group/HoL3JyTBna/contest/554268/problem/F
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    // count digits
    double logSum = 0;
    for (int i = 1; i <= n; ++i) {
        logSum += log10(i);
    }
    int digits = (int)logSum + 1;

    // Count trailing zeros
    int trailingZeros = 0;
    int div = 5;
    while (n / div > 0) {
        trailingZeros += n / div;
        div *= 5;
    }

    cout << digits << endl;
    cout << trailingZeros << endl;

    return 0;
}
