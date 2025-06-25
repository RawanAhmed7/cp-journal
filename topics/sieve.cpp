#include <iostream>

using namespace std;

 const int  n =1e7+5;
 bool good[n];
 typedef long long ll;
int main()
{
    for (int i=1 ; i< n ;i++){
        good[i]=true;
    }
   good[1]=false;
   // create the whole true array except 1

   for(int i=2 ; i*i <  n ; i++){
    if(good[i]){
        for(ll j = 1ll *i*i; j< n ;j+=i){
            good[j]=false;
        }
    }

   }
   for(int i=1; i<n ; i++){
    if(good[i]){
        cout<<i<<"\n";
        system("PAUSE");
    }
   }
    return 0;
}
