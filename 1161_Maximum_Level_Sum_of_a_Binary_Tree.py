# Definition for a binary tree node.
from operator import le
from typing import Optional


class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:
    sums = {}

    def sun_level(self, node, level):
        if level in self.sums:
            self.sums[level] += node.val
        else:
            self.sums[level] = node.val

        if (node.left != None):
            self.sun_level(node.left, level+1)
        if (node.right != None):
            self.sun_level(node.right, level+1)

    def maxLevelSum(self, root: Optional[TreeNode]) -> int:
        self.sun_level(root, 1)
        print(max(self.sums,key=self.sums.get))


root = TreeNode(
    1

)

solution = Solution()

solution.maxLevelSum(root)
