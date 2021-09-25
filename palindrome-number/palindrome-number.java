class Solution {
    public boolean isPalindrome(int x) {
        int a=x;
        String reverse= "";
        boolean result = false;
        while(a>0) {
            int b;
            b = a%10;
            reverse += String.valueOf(b);
            a = (int)a/10;
            
        }
        if (x>0) {
            if (x==Long.parseLong(reverse)) {
                result = true;
            }
            else {
                result = false;
            }
        }
        else if (x<0) {
            result = false;
        }
        else {
            result = true;
        }
        
        return result;
        
        
    }
}