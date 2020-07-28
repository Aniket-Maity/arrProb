Problem Statement
You are given an integer array of length n. You have to break the array in two parts such that difference of summation of two parts is minimum. And you have to output that minimum value.

For example.. lets take the array as 1 2 3 4. It can be broken down in two parts in 3 ways. (A) 1 and 2 3 4 (B) 1, 2 and 3, 4 and (C) 1 2 3 and 4. The differences of summations are 

(A) |1 - (2 + 3 + 4)| = |-8| = 8

(B) |(1 + 2) - ( 3 + 4)| = |-4| = 4

(C) |(1 + 2 + 3) - 4| = |2| = 2



Hence the answer is 2 

Extra Info


Input Format
The first line of the input has one integer N which specifies the length of the array and the second line contain N numbers of space separated integers which specifies the array itself.

Output Format
A single integer ��� the minimum value of difference of summation of two parts

Constraints
Array integers are all greater than 0 but lesser than 1024

Time Limit
2s.
Each test case should pass in 2s.
Sample Input
5  
5 2 4 3 1
Sample Output
1