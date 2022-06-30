class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int x2 = coordinates[1][0];
        int y2 = coordinates[1][1];
        int dx = x2 - coordinates[0][0];
        int dy = y2 - coordinates[0][1];
        for(int i=2;i<coordinates.size();i++)
        {
            int x3 = coordinates[i][0];
            int y3 = coordinates[i][1];
            // cout<<slope_1<<endl;
            if (dx * (y3 - y2) != dy * (x3 - x2))
            {
                return false;
            }
        }
        return true;
    }
};