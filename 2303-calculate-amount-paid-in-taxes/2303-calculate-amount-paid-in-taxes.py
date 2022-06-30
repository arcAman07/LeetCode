class Solution:
    def calculateTax(self, brackets: List[List[int]], income: int) -> float:
        tax = 0
        pu = 0
        for _, (u, p) in enumerate(brackets):
            # Bracket income bound exceeds our income
            if income < u:
                tax += (income - pu) * (p / 100)
                break
            tax += (u - pu) * (p / 100)
            pu = u
        return tax
        