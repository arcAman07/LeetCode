class Solution {
public:
    int isWinner(vector<int>& player1, vector<int>& player2) {
        int a = player1[0];
        int b = player2[0];
        for(int i=1;i<player1.size();i++)
        {
            a += player1[i];
            b += player2[i];
            if(i<2)
            {
                if(player1[i-1] == 10)
                {
                    a += player1[i];
                }
                if(player2[i-1] == 10)
                {
                    b += player2[i];
                }
            } else {
                if(player1[i-1] == 10 or player1[i-2] == 10 )
                {
                    a += player1[i];
                }
                if(player2[i-1] == 10 or player2[i-2] == 10 )
                {
                    b += player2[i];
                }
            }
        }
        if (a == b)
        {
            return 0;
        } else if (a>b) {
            return 1;
        }
        return 2;
    }
};