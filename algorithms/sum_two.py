# Given an array of integers _nums_ and an integer _target_, return indices of the two numbers such that they add up to _target_.
# You may assume that each input would have *exacly one solution*, and you may not use the same element twice.
# You can return the answer in any order.

# Example 1:

# Input: nums = [2,7,11,15], target = 9
# Output: [0,1]
# Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
# Example 2:

# Input: nums = [3,2,4], target = 6
# Output: [1,2]
# Example 3:

# Input: nums = [3,3], target = 6
# Output: [0,1]


# First method for resolve this challenge
# Force brutal

# Complexily is O(n²)

from typing import List


class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        for i in range(len(nums)):
            for j in range(len(nums)):
                if target == nums[i] + nums[j]:
                    return [i, j]
                

# Second approach for eficient and cost less space memory
# The best way for "armazenar" the data for more eficient

class Solution:
    def twoSum(self, nums: List[int], target:int) -> List[int]:
        hashmap = {}
        for i in range(len(nums)):
            # In the code below, "armazenamos os dados na tabela hash com a respectiva chave"
            # Neste caso passamos os valores do parâmetro da função como chave e o index 'i' como valor
            hashmap[nums[i]] = i

        for i in range(len(nums)):
            complement = target - nums[i]
            if complement in hashmap and hashmap[complement] != i:
                return [i, hashmap[complement]]


# Another solution that using hash table for more efficiency

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hashmap = {}
        for i in range(len(nums)):
            complement = target - nums[i]
            if complement in hashmap:
                return [i, hashmap[complement]]
            hashmap[nums[i]] = i