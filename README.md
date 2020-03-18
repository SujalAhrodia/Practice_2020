# Practice_2020

* KickOff January 18th

## Day 1
> 1. Given an array of 2n integers, your task is to group these integers into n pairs of integer, say (a1, b1), (a2, b2), ..., (an, bn) which makes sum of min(ai, bi) for all i from 1 to n as large as possible.
> 2. Let's call an array A a mountain if the following properties hold: 
A.length >= 3
There exists some 0 < i < A.length - 1 such that A[0] < A[1] < ... A[i-1] < A[i] > A[i+1] > ... > A[A.length - 1]
Given an array that is definitely a mountain, return any i such that A[0] < A[1] < ... A[i-1] < A[i] > A[i+1] > ... > A[A.length - 1].

## Day 2
> 1. Write a function that reverses a string. The input string is given as an array of characters char[].
Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.
You may assume all the characters consist of printable ascii characters.
> 2. Given a string S that only contains "I" (increase) or "D" (decrease), let N = S.length.
Return any permutation A of [0, 1, ..., N] such that for all i = 0, ..., N-1: <br>
If S[i] == "I", then A[i] < A[i+1] <br>
If S[i] == "D", then A[i] > A[i+1] <br>
 
## Day 3
> 1. Given an array of integers, return indices of the two numbers such that they add up to a specific target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
> 2. Given an array of integers, find if the array contains any duplicates.
Your function should return true if any value appears at least twice in the array, and it should return false if every element is distinct.

## Day 4
> 1. Reverse a singly linked list.
> 2. Given a linked list, determine if it has a cycle in it.
To represent a cycle in the given linked list, we use an integer pos which represents the position (0-indexed) in the linked list where tail connects to. If pos is -1, then there is no cycle in the linked list.

## Day 5
> 1. Given an n-ary tree, return the preorder traversal of its nodes' values.
Nary-Tree input serialization is represented in their level order traversal, each group of children is separated by the null value (See examples).
>2. Given an n-ary tree, return the postorder traversal of its nodes' values.
Nary-Tree input serialization is represented in their level order traversal, each group of children is separated by the null value (See examples).

## Day 6
> 1. Given an array nums of n integers where n > 1,  return an array output such that output[i] is equal to the product of all the elements of nums except nums[i].
> 2. Say you have an array for which the ith element is the price of a given stock on day i.
If you were only permitted to complete at most one transaction (i.e., buy one and sell one share of the stock), design an algorithm to find the maximum profit.
Note that you cannot sell a stock before you buy one.
> 3. Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

## Day 7
> 1. Given a binary tree, find its maximum depth.
The maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.
Note: A leaf is a node with no children.
> 2. Given a binary tree, find its minimum depth.
The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.
Note: A leaf is a node with no children.

## Day 8
> 1. Given two binary trees, write a function to check if they are the same or not.
Two binary trees are considered the same if they are structurally identical and the nodes have the same value.
> 2. Invert a binary tree.

## Day 9
> 1. Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
An input string is valid if:
Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Note that an empty string is also considered valid.
> 2. Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.
Note: For the purpose of this problem, we define empty string as valid palindrome.

## Day 10
> 1. Given a binary tree, determine if it is a valid binary search tree (BST).
Assume a BST is defined as follows:
The left subtree of a node contains only nodes with keys less than the node's key.
The right subtree of a node contains only nodes with keys greater than the node's key.
Both the left and right subtrees must also be binary search trees.
> 2. Giving two portfolios combination of stocks, one for  yourself and one for benchmark. They also provide the stocks market price individually. We have to maintain the equal vale of the our portfolios by selling or buying the our stocks. (Using programming ).
eg: Vodafone,STOCK,10 | Google,STOCK,15 | Microsoft,BOND,15: Vodafone,STOCK,15 | Google,STOCK,10 | Microsoft,BOND,15

## Day 11
> 1. Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements
> 2. Given two strings s and t , write a function to determine if t is an anagram of s.

## Day 12
> 1. Given an integer array nums, find the contiguous subarray within an array (containing at least one number) which has the largest product.

## Day 13
> 1. Calculate the sum of two integers a and b, but you are not allowed to use the operator + and -.
> 2. Write a function that takes an unsigned integer and return the number of '1' bits it has (also known as the Hamming weight).
> 3. Given a non negative integer number num. For every numbers i in the range 0 ≤ i ≤ num calculate the number of 1's in their binary representation and return them as an array.

## Day 14
> 1. Given an array containing n distinct numbers taken from 0, 1, 2, ..., n, find the one that is missing from the array.
> 2. Reverse bits of a given 32 bits unsigned integer.

## Detour
<details><summary>Interview</summary>

> 1. Given a List of words, return the words that can be typed using letters of alphabet on only one row's of American keyboard. 
### Day 15
> 2. You are given two arrays (without duplicates) nums1 and nums2 where nums1’s elements are subset of nums2. Find all the next greater numbers for nums1's elements in the corresponding places of nums2.
The Next Greater Number of a number x in nums1 is the first greater number to its right in nums2. If it does not exist, output -1 for this number.

> 3. Reverse a singly linked list.

> 4. In MATLAB, there is a very useful function called 'reshape', which can reshape a matrix into a new one with different size but keep its original data.
You're given a matrix represented by a two-dimensional array, and two positive integers r and c representing the row number and column number of the wanted reshaped matrix, respectively.
The reshaped matrix need to be filled with all the elements of the original matrix in the same row-traversing order as they were.
If the 'reshape' operation with given parameters is possible and legal, output the new reshaped matrix; Otherwise, output the original matrix.

### Day 16
> 1. Given a non-empty array of non-negative integers nums, the degree of this array is defined as the maximum frequency of any one of its elements.
Your task is to find the smallest possible length of a (contiguous) subarray of nums, that has the same degree as nums.

> 2. Find the sum of all left leaves in a given binary tree.

> 3. Given a linked list, remove the n-th node from the end of list and return its head.

### Day 17
> 1. Implement the following operations of a queue using stacks.
>>* push(x) -- Push element x to the back of queue.
>>* pop() -- Removes the element from in front of queue.
>>* peek() -- Get the front element.
>>* empty() -- Return whether the queue is empty.

> 2. Implement the following operations of a stack using queues.
>>* push(x) -- Push element x onto stack.
>>* pop() -- Removes the element on top of the stack.
>>* top() -- Get the top element.
>>* empty() -- Return whether the stack is empty.

### Day 18
> 1. Given an array of n integers nums and a target, find the number of index triplets i, j, k with 0 <= i < j < k < n that satisfy the condition nums[i] + nums[j] + nums[k] < target.

> 2. Given an array nums of n integers, are there elements a, b, c in nums such that a + b + c = 0? Find all unique triplets in the array which gives the sum of zero.
</details>

## Day 19
> 1. A robot is located at the top-left corner of a m x n grid (marked 'Start' in the diagram below).
The robot can only move either down or right at any point in time. The robot is trying to reach the bottom-right corner of the grid (marked 'Finish' in the diagram below).
How many possible unique paths are there?

> 2. A robot is located at the top-left corner of a m x n grid (marked 'Start' in the diagram below).
The robot can only move either down or right at any point in time. The robot is trying to reach the bottom-right corner of the grid (marked 'Finish' in the diagram below).
Now consider if some obstacles are added to the grids. How many unique paths would there be?

> 3. You are climbing a stair case. It takes n steps to reach to the top.
Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?
Note: Given n will be a positive integer.

> 4. You are given coins of different denominations and a total amount of money amount. Write a function to compute the fewest number of coins that you need to make up that amount. If that amount of money cannot be made up by any combination of the coins, return -1.

## Day 20
> 1. You are given coins of different denominations and a total amount of money. Write a function to compute the number of combinations that make up that amount. You may assume that you have infinite number of each kind of coin.

> 2. Given an unsorted array of integers, find the length of longest increasing subsequence.

> 3. Given two strings text1 and text2, return the length of their longest common subsequence.
A subsequence of a string is a new string generated from the original string with some characters(can be none) deleted without changing the relative order of the remaining characters. (eg, "ace" is a subsequence of "abcde" while "aec" is not). A common subsequence of two strings is a subsequence that is common to both strings.
If there is no common subsequence, return 0.

## Detour 2

<details><summary> Interview </summary>

## Day 21
> 1. Given the root node of a binary search tree, return the sum of values of all nodes with value between L and R (inclusive).
The binary search tree is guaranteed to have unique values.

> 2. Given an integer n, return any array containing n unique integers such that they add up to 0.

> 3. Given an array A of non-negative integers, return an array consisting of all the even elements of A, followed by all the odd elements of A.
You may return any answer array that satisfies this condition.

> 4. Given an array of integers A sorted in non-decreasing order, return an array of the squares of each number, also in sorted non-decreasing order.

> 5. Given a stream of integers and a window size, calculate the moving average of all integers in the sliding window.

## Day 22

> 1. Given a string, you need to reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.

> 2. Given two arrays arr1 and arr2, the elements of arr2 are distinct, and all elements in arr2 are also in arr1.
Sort the elements of arr1 such that the relative ordering of items in arr1 are the same as in arr2.  Elements that don't appear in arr2 should be placed at the end of arr1 in ascending order.

> 3. The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence, such that each number is the sum of the two preceding ones, starting from 0 and 1. That is,
F(0) = 0,   F(1) = 1
F(N) = F(N - 1) + F(N - 2), for N > 1.
Given N, calculate F(N).

> 4. Consider all the leaves of a binary tree.  From left to right order, the values of those leaves form a leaf value sequence.
For example, in the given tree above, the leaf value sequence is (6, 7, 4, 9, 8).
Two binary trees are considered leaf-similar if their leaf value sequence is the same.
Return true if and only if the two given trees with head nodes root1 and root2 are leaf-similar.

## Day 23

> 1. Implement atoi which converts a string to an integer.

> 2. Given a string s, find the longest palindromic substring in s. You may assume that the maximum length of s is 1000.

## Day 24

> 1.Given a m x n matrix, if an element is 0, set its entire row and column to 0. Do it in-place.

## Day 25

> 1. Given an input string, reverse the string word by word.
Note:
>> * A word is defined as a sequence of non-space characters.
>> * Input string may contain leading or trailing spaces. However, your reversed string should not contain leading or trailing spaces.
>> * You need to reduce multiple spaces between two words to a single space in the reversed string.
>> * For C programmers, try to solve it in-place in O(1) extra space.

> 2. Given an input string , reverse the string word by word. 
Note:
>> * A word is defined as a sequence of non-space characters.
>> * The input string does not contain leading or trailing spaces.
>> * The words are always separated by a single space.
>> * Follow up: Could you do it in-place without allocating extra space?

> 3. Given an array of strings, group anagrams together.
Note:
>> * All inputs will be in lowercase.
>> * The order of your output does not matter.

> 4. Given a binary tree, determine if it is a valid binary search tree (BST).
Assume a BST is defined as follows:
>> * The left subtree of a node contains only nodes with keys less than the node's key.
>> * The right subtree of a node contains only nodes with keys greater than the node's key.
>> * Both the left and right subtrees must also be binary search trees.

## Day 26

> 1. Given a matrix of m x n elements (m rows, n columns), return all elements of the matrix in spiral order.

> 2. You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.
You may assume the two numbers do not contain any leading zero, except the number 0 itself.

> 3. You are given two non-empty linked lists representing two non-negative integers. The most significant digit comes first and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.
You may assume the two numbers do not contain any leading zero, except the number 0 itself.
Follow up:
What if you cannot modify the input lists? In other words, reversing the lists is not allowed.

## Day 27

> 1. Merge two sorted linked lists and return it as a new list. The new list should be made by splicing together the nodes of the first two lists.

> 2. Merge k sorted linked lists and return it as one sorted list. Analyze and describe its complexity.

## Day 28

> 1. You are given an n x n 2D matrix representing an image.
Rotate the image by 90 degrees (clockwise).
Note:
You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.

> 2. Given a binary tree, return the inorder traversal of its nodes' values.

> 3. Given a binary tree, return the level order traversal of its nodes' values. (ie, from left to right, level by level).

## Day 29

> 1. Say you have an array for which the ith element is the price of a given stock on day i.
If you were only permitted to complete at most one transaction (i.e., buy one and sell one share of the stock), design an algorithm to find the maximum profit.
Note that you cannot sell a stock before you buy one.

> 2. Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

## Day 30

> 1. Given a linked list, swap every two adjacent nodes and return its head.
You may not modify the values in the list's nodes, only nodes itself may be changed.

> 2. Design a parking lot.

## Day 31

> 1. Given a binary tree
Populate each next pointer to point to its next right node. If there is no next right node, the next pointer should be set to NULL.
Initially, all next pointers are set to NULL.
Follow up:
>> * You may only use constant extra space.
>> * Recursive approach is fine, you may assume implicit stack space does not count as extra space for this problem.

## Day 32

> 1. Given a binary search tree (BST), find the lowest common ancestor (LCA) of two given nodes in the BST.
According to the definition of LCA on Wikipedia: “The lowest common ancestor is defined between two nodes p and q as the lowest node in T that has both p and q as descendants (where we allow a node to be a descendant of itself).”
Note:
>> * All of the nodes' values will be unique.
>> * p and q are different and both values will exist in the BST.

> 2. Given a binary  tree, find the lowest common ancestor (LCA) of two given nodes in the tree.
According to the definition of LCA on Wikipedia: “The lowest common ancestor is defined between two nodes p and q as the lowest node in T that has both p and q as descendants (where we allow a node to be a descendant of itself).”
Note:
>> * All of the nodes' values will be unique.
>> * p and q are different and both values will exist in the tree.

> 3. You are given a perfect binary tree where all leaves are on the same level, and every parent has two children.
Populate each next pointer to point to its next right node. If there is no next right node, the next pointer should be set to NULL.
Initially, all next pointers are set to NULL.
Follow up:
>> * You may only use constant extra space.
>> * Recursive approach is fine, you may assume implicit stack space does not count as extra space for this problem.

> 4. Given a binary tree, return the zigzag level order traversal of its nodes' values. (ie, from left to right, then right to left for the next level and alternate between).

> 5. Given a 2d grid map of '1's (land) and '0's (water), count the number of islands. An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically. You may assume all four edges of the grid are all surrounded by water.

> 6. Given an integer, write a function to determine if it is a power of two.

## Day 33

> 1. Given two non-negative integers num1 and num2 represented as string, return the sum of num1 and num2.
Note:
>> * The length of both num1 and num2 is < 5100.
>> * Both num1 and num2 contains only digits 0-9.
>> * Both num1 and num2 does not contain any leading zero.
>> * You must not use any built-in BigInteger library or convert the inputs to integer directly.

> 2. Find the total area covered by two rectilinear rectangles in a 2D plane.
Each rectangle is defined by its bottom left corner and top right corner as shown in the figure.

> 3. Given a sorted array nums, remove the duplicates in-place such that each element appear only once and return the new length.
Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

> 4. Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.
Note:
>> * The number of elements initialized in nums1 and nums2 are m and n respectively.
>> * You may assume that nums1 has enough space (size that is greater or equal to m + n) to hold additional elements from nums2.

## Day 34

> 1. Given an array with n objects colored red, white or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white and blue.
Here, we will use the integers 0, 1, and 2 to represent the color red, white, and blue respectively.
Note: You are not suppose to use the library's sort function for this problem.

> 2. Suppose an array sorted in ascending order is rotated at some pivot unknown to you beforehand.
(i.e., [0,1,2,4,5,6,7] might become [4,5,6,7,0,1,2]).
You are given a target value to search. If found in the array return its index, otherwise return -1.
NOTE:
>> * You may assume no duplicate exists in the array.
>> * Your algorithm's runtime complexity must be in the order of O(log n).

## Day 35

> 1. Suppose an array sorted in ascending order is rotated at some pivot unknown to you beforehand.
(i.e.,  [0,1,2,4,5,6,7] might become  [4,5,6,7,0,1,2]).
Find the minimum element.
You may assume no duplicate exists in the array.

> 2. Suppose an array sorted in ascending order is rotated at some pivot unknown to you beforehand.
(i.e.,  [0,1,2,4,5,6,7] might become  [4,5,6,7,0,1,2]).
Find the minimum element.
The array may contain duplicates.

## Day 36

> 1. Write an efficient algorithm that searches for a value in an m x n matrix. This matrix has the following properties:
Integers in each row are sorted from left to right.
The first integer of each row is greater than the last integer of the previous row.

> 2. Write an efficient algorithm that searches for a value in an m x n matrix. This matrix has the following properties:
Integers in each row are sorted in ascending from left to right.
Integers in each column are sorted in ascending from top to bottom.

> 3. Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent.
A mapping of digit to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.

> 4. Implement a trie with insert, search, and startsWith methods.

> 5. Design and implement a data structure for Least Recently Used (LRU) cache. It should support the following operations: get and put.
>> * get(key) - Get the value (will always be positive) of the key if the key exists in the cache, otherwise return -1.
>> * put(key, value) - Set or insert the value if the key is not already present. When the cache reached its capacity, it should invalidate the least recently used item before inserting a new item.
The cache is initialized with a positive capacity.
Follow up:
>> * Could you do both operations in O(1) time complexity?

## Day 37

> 1. Serialization is the process of converting a data structure or object into a sequence of bits so that it can be stored in a file or memory buffer, or transmitted across a network connection link to be reconstructed later in the same or another computer environment.
Design an algorithm to serialize and deserialize a binary tree. There is no restriction on how your serialization/deserialization algorithm should work. You just need to ensure that a binary tree can be serialized to a string and this string can be deserialized to the original tree structure.

> 2. Given an array of characters, compress it in-place.
The length after compression must always be smaller than or equal to the original array.
Every element of the array should be a character (not int) of length 1.
After you are done modifying the input array in-place, return the new length of the array.

> 3. Design a Tic-tac-toe game that is played between two players on a n x n grid.
You may assume the following rules:
>> * A move is guaranteed to be valid and is placed on an empty block.
>> * Once a winning condition is reached, no more moves is allowed.
>> * A player who succeeds in placing n of their marks in a horizontal, vertical, or diagonal row wins the game

</details>
 
## Day 38

> 1. Given a non-empty 2D array grid of 0's and 1's, an island is a group of 1's (representing land) connected 4-directionally (horizontal or vertical.) You may assume all four edges of the grid are surrounded by water.
Find the maximum area of an island in the given 2D array. (If there is no island, the maximum area is 0.)

## Day 39

> 1. Given an array arr of positive integers, consider all binary trees such that:
Each node has either 0 or 2 children;
The values of arr correspond to the values of each leaf in an in-order traversal of the tree.  (Recall that a node is a leaf if and only if it has 0 children.)
The value of each non-leaf node is equal to the product of the largest leaf value in its left and right subtree respectively.
Among all possible binary trees considered, return the smallest possible sum of the values of each non-leaf node.  It is guaranteed this sum fits into a 32-bit integer.

> 2. Given a binary tree, imagine yourself standing on the right side of it, return the values of the nodes you can see ordered from top to bottom.

> 3. Given a string, your task is to count how many palindromic substrings in this string.
The substrings with different start indexes or end indexes are counted as different substrings even they consist of same characters.

> 4. Given an array of numbers, verify whether it is the correct preorder traversal sequence of a binary search tree.
You may assume each number in the sequence is unique.

> 5. Given a linked list, reverse the nodes of a linked list k at a time and return its modified list.
k is a positive integer and is less than or equal to the length of the linked list. If the number of nodes is not a multiple of k then left-out nodes in the end should remain as it is.
