
#include <math.h>
int bitwiseComplement(int n){
    int a=n;
    int j=0;
    int compliment=0;
    if(a==0)
    {
        return 1;
    }
    while(a>0)
    {
        int b = a%2;
        if (b == 0)
        {
            compliment = compliment + 1*pow(2,j);
        }
        a = a/2;
        j = j+1;
    }
    return compliment;
}