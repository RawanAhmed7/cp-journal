/*
https://codeforces.com/contest/1999/problem/C
As a computer science student, Alex faces a hard challenge — showering. He tries to shower daily, but despite his best efforts there are always challenges. He takes s
 minutes to shower and a day only has m
 minutes!

He already has n
 tasks planned for the day. Task i
 is represented as an interval (li
, ri)
, which means that Alex is busy and can not take a shower in that time interval (at any point in time strictly between li
 and ri
). No two tasks overlap.

Given all n
 time intervals, will Alex be able to shower that day? In other words, will Alex have a free time interval of length at least s
?
*/
#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;

    while (t--) {
        int n, s, m;
        cin >> n >> s >> m;
        int current_time = 0;
        bool can_shower = false;

        for (int i = 0; i < n; i++) {
            int l, r;
            cin >> l >> r;
            if (l - current_time >= s) {
                can_shower = true;
            }

            current_time = r;
        }

        if (!can_shower && m - current_time >= s) {
            can_shower = true;
        }

        cout << (can_shower ? "YES" : "NO") << "\n";
    }

    return 0;
}

