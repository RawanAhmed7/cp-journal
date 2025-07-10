// https://codeforces.com/group/HoL3JyTBna/contest/554268/problem/C
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   int m1, c1, m2, c2;
   double x ,y;
   cin>>m1>>c1>>m2>>c2;
   if(m1==m2){
    cout<<-1 <<endl;

   }else{
      x=(double)(c1-c2)/(m2-m1);
      y=m1*x+c1;
      cout <<fixed<< setprecision(6)<<x<<" "<<y;   }
    return 0;
}
