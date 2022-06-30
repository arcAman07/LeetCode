// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long int lower = 1;
        long long int upper = n;
        long long int med;
        while(upper>=lower)
        {
            long long int mid = (upper+lower)/2;
            cout<<isBadVersion(mid)<<endl;
            if(isBadVersion(mid) == true && isBadVersion(mid-1) == false )
            {
                return mid;
            }
            else if(isBadVersion(mid) == true && isBadVersion(mid-1) == true)
            {
                med = mid;
                upper = mid-1;
            }
            else
            {
                med = mid;
                lower = mid+1;
            }
        }
        return med;
    }
};