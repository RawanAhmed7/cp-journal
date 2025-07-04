// https://codeforces.com/contest/2044/problem/B
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string a ;
        cin>>a;
        for(int i=0 ; i<a.size();i++){
            if(a[i]=='q'){
                a[i]='p';
            }else if (a[i]=='p'){
            a[i]='q';
            }}

         reverse(a.begin(), a.end());
         cout<<a<<endl;
    }

    return 0;
}
