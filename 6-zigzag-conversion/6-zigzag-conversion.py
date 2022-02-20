class Solution:
    def convert(self, s: str, numRows: int) -> str:
        
        lines = [""] * numRows
        
        cycle_range = list(range(numRows)) + list(range(numRows-2, 0, -1))
        c = cycle(cycle_range)
        
        for char in s:            
            lines[next(c)] += char            
        
        return ''.join(lines)
        