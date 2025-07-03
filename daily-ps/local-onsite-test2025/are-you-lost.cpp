#include <iostream>
using namespace std;
using ll = long long;

ll combination3(ll x) {
    if (x < 3) return 0;
    return x * (x - 1) * (x - 2) / 6;
}

int main() {
    ll n, m;
    cin >> n >> m;
    ll total = combination3(n + m);
    ll invalid = combination3(n) + combination3(m);
    ll valid = total - invalid;

    cout << valid << endl;
    return 0;
}

/*
If You are Lost Just remember that you need one more rest. Seif Will give you two vertical lines:

The first line contains n points.
The second line contains m points.
Assume that:

The two lines are vertical and placed separately, so no three points are collinear.
All points are distinct.
Task: Count the number of distinct triangles that can be formed by choosing any 3 points in total from both lines.

Note: Triangle: A triangle is a three-sided polygon, and it must satisfy the triangle inequality theorem, ensuring that the sum of the lengths of any
two sides is greater than the length of the third side.

Input
Input consists of only one line containing 2 integers n, m (1≤n,m≤2⋅105)
 – the number of points on the first and the second line respectively.

Output
Print the number of distinct triangles that can be formed by choosing any 3 points in total from both lines.
*/
