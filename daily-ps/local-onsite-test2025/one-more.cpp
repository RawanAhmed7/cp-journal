/* https://codeforces.com/group/fhhGuroBIf/contest/618939/problem/E*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a;
    int x;

    while(cin >> x && x != 0) {
        a.push_back(x);
    }
    a.push_back(0);

    for (int i = a.size() - 1; i >= 0; --i) {
        cout << a[i] << " ";
    }

    cout << endl;
    return 0;
}
