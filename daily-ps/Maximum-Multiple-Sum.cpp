#include <iostream>

using namespace std;

int main()
{
    int t ,n ;
    cin>>t ;
    while(t--){
    cin>>n ;
       int max_x = 2;
        long long max_sum = 0;

        for (int x = 2; x <= n; x++) {
            int k = n / x;
            long long sum = 1LL * x * k * (k + 1) / 2;
            if (sum > max_sum) {
                max_sum = sum;
                max_x = x;
            }
        }
        cout << max_x << endl;
    }







    return 0;
}

