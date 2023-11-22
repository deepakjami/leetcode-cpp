from collections import Counter

class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        return Counter(s) == Counter(t)

solution = Solution()
s1 = input()
s2 = input()
result = solution.isAnagram(s1, s2)
print(result)
