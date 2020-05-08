/*


Question-  You are given an array coordinates, coordinates[i] = [x, y], where [x, y] represents the coordinate of a point. Check if these points make a straight line in the XY plane.

 

 

Example 1:



Input: coordinates = [[1,2],[2,3],[3,4],[4,5],[5,6],[6,7]]
Output: true
Example 2:



Input: coordinates = [[1,1],[2,2],[3,4],[4,5],[5,6],[7,7]]
Output: false
 

Constraints:

2 <= coordinates.length <= 1000
coordinates[i].length == 2
-10^4 <= coordinates[i][0], coordinates[i][1] <= 10^4
coordinates contains no duplicate point.



   Hide Hint #1  
If there're only 2 points, return true.
   Hide Hint #2  
Check if all other points lie on the line defined by the first 2 points.
   Hide Hint #3  
Use cross product to check collinearity.


*/

// Approach
/*
first find the slope of the line created by first two points.Then for every next point find the slope of line created by that point and one of the initial point s
if its same continue
else return false
*/

//CODE
class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& v) {
        int x1=v[0][0];
        int y1=v[0][1];
        double m;
        int x=0;
        for(int i=1;i<v.size();i++)
        {
            int x2=v[i][0];
            int y2=v[i][1];
            if(x==0)
            {
                m=(y2-y1)*1.0/(x2-x1)*1.0;
                //cout<<m<<endl;
                x=1;
            }
            else
            {
                double m1=(y2-y1)*1.0/(x2-x1)*1.0;
                //cout<<"m1 "<<m1<<endl;
                if(m1!=m)
                {
                    return false;
                }
            }
        }
        return true;
    }
};
