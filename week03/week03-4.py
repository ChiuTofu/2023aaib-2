class Solution:
    def maxFrequencyElements(self, nums: List[int]) -> int:
        T = [0]*101 # 参璸计瞷Ω计计1...100皚璶秨101
        best = 0
        for num in nums: #癹伴
            T[num] += 1
            if T[num] > best: best = T[num]

        total = 0
        for t  in T:
            if t == best: total += t
        return total
