class Solution:
    def containsDuplicates(self, my_list: list[int]) -> bool:
        hashset = set()
        for n in my_list:
            if n in hashset:
                return True
            hashset.add(n)
        return False

my_list = list(map(int,input().split()))
solution = Solution()
result = solution.containsDuplicates(my_list)
print(result)
