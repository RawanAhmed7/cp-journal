#include <iostream>
#include <vector>

using namespace std;

int main()
{
   int t; cin>>t;

   while(t--){
       int n , a ;
       cin>>n;
       vector <int> odd ;
       vector <int> even;
      for (int i = 0; i < 2 * n; ++i) {
           cin >> a;
           if (a % 2 == 0) {
               even.push_back(a);
           } else {
               odd.push_back(a);
           }
       }

    if(even.size()== odd.size()){
            cout<<"Yes"<<endl;
        }else cout<<"No"<<endl;
   }
    return 0;
}
