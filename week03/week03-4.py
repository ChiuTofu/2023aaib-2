class Solution:
    def maxFrequencyElements(self, nums: List[int]) -> int:
        T = [0]*101 # 統計數字出現次數，因數字1...100，陣列要開101個
        best = 0
        for num in nums: #迴圈
            T[num] += 1
            if T[num] > best: best = T[num]

        total = 0
        for t  in T:
            if t == best: total += t
        return total
