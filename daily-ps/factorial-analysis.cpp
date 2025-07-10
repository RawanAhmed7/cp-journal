// https://codeforces.com/group/HoL3JyTBna/contest/554268/problem/D
#include <iostream>

using namespace std;

int main()
{
   long long n ; cin >>n ;
   if (n == 1 || n==2) {
        cout << "NOT PRIME" << endl;
        cout << "ODD" << endl;
    }else if (n==3){
        cout << "PRIME" << endl;
        cout << "EVEN" << endl;
    }
     else {
        cout << "NOT PRIME" << endl;
        cout << "EVEN" << endl;
    }
    return 0;
}
