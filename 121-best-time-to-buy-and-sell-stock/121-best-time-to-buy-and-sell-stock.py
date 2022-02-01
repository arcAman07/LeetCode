class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        price = len(prices)
        maxProfit = 0
        minPrice = prices[0]
        for i in range(1,price):
            maxProfit = max(maxProfit, prices[i]-minPrice);
            minPrice = min(minPrice, prices[i]);

        return maxProfit;
 
            
            
 
    
         
        
        