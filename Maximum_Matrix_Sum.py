class Solution:
    def maxMatrixSum(self, matrix) -> int:
        negative_count = 0
        total_sum= 0
        minimun = float("inf")
        for row in matrix:
            for x in row:
                if x <= 0:
                    negative_count +=1 
                total_sum += abs(x)
                minimun = min(minimun, abs(x))
        if negative_count %2 ==0:
            return total_sum
        return total_sum -minimun*2

Sol = Solution()

print(Sol.maxMatrixSum(
[[-10000,-10000,-10000],[-10000,-10000,-10000],[-10000,-10000,-10000]]
))
