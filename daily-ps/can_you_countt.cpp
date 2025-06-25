/*You are given three integers, l, r, and d
. Determine how many integers in the range [l,r]
 inclusive are divisible by d

A number x is divisible by a number y if the remainder of y|x equals 0

Input
The input consists of a single line containing three integers l, r, and d
 (1≤l≤r≤109,1≤d≤109)
.

Output
Print a single integer representing the count of numbers in the range [l,r]
 that are divisible by d
.*/

#include <iostream>

using namespace std;

int main()
{
    long long l, r, d;
    cin>>l>>r>>d;
    int sum= 0;
   long long count = (r / d) - ((l - 1) / d);
    cout << count;
    return 0;
}
