#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t; cin >>t;
    vector<int>programmers,math,sports;
    int skill;

    for(int i=0 ;i<t ;i++){
            cin>>skill;
        if(skill==1){
            programmers.push_back(i);
        }else if(skill==2){
        math.push_back(i);
    }
        else{
            sports.push_back(i);
        }


    }

       int teams = min(min(programmers.size(), math.size()), sports.size());
    cout << teams << '\n';
        for(int i=0 ;i<teams;i++){
        cout<< programmers[i]<<" "<<math[i]<<" "<<sports[i]<<" " ;
        }
    return 0;
}
