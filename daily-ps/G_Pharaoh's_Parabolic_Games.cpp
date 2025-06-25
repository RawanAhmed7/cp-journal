/* task is to determine if the ball will successfully land on the table given its starting point and highest point in its arc. Each successful attempt brings glory to the player, while a failed landing represents dishonor. Will your calculations help the players master this game of intellect?

Consider a 3D Cartesian coordinate system where a rectangular table is positioned on the xy
-plane at z=0
. The table spans a specified rectangular region defined by xmin≤x≤xmax
 and ymin≤y≤ymax
. You are given q
 queries, and for each query, the following information is provided:

point A=(xA,yA,0)
 representing the starting position of a ball.
point B=(xB,yB,zB)
 representing the highest point the ball will reach during its trajectory.

 goal is  Check if the ball lands on the table

 Approach symmetry landing point C = 2B - A
 Check if C is within table bounds
 */

#include <iostream>

using namespace std;

int main()
{
    int x_min,x_max,y_min,y_max;
    cin>>x_min>>x_max>>y_min>>y_max;

    int query,ax,ay,az;
    cin>>query;
    int bx,by,bz;

    for(int i=0 ; i<query ; i++){
            cin>>ax>>ay>>az;
            cin>>bx>>by>>bz;
            int cx = 2 * bx - ax;
            int cy = 2 * by - ay;
            int cz=0;
        if(x_min<=cx && cx<=x_max && y_min<=cy && cy<=y_max ){
            cout<< "YES"<<endl;
        }else cout<<"NO"<<endl;

    }




    return 0;
}
