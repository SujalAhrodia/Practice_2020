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
