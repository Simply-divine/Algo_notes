![](https://github.com/Simply-divine/Algo_notes/blob/master/images/logo.png)


Topics to be covered :

1. Ammortized analysis.
2. Range Queries
3. More topics will be updated soon..


# Ammortized Analysis

[![lecture source](http://img.youtube.com/vi/3MpzavN3Mco/0.jpg)](http://www.youtube.com/watch?v=3MpzavN3Mco)
- occasional operation is slow but overall time complexity is fast.
- Examples :
	- Hash Table 
	- Splay tree
	- Disjoint Set

### Two pointers method
- Two pointers to iterate the array values.
- Both pointers can move to one direction only.
 1. #### Subarray sum
	 *We are given an array of integers and sum x. We have to find a subarray whose sum is x or report that there are none.*
For example
x = 8 
	
         1 3 2 5 1 1 2 3


    contains a subarray 

         1 3 (2 5 1) 1 2 3

* Complexity : O(n)
- pointers will denote start and end of an array
##### Algorithm steps
1.  The initial subarray has sum of 6.
 
        (1 3 2) 5 1 1 2 3
        
2. The left pointer moves one step to the right. The right pointer doesnot move or else the sum would exceed x(i.e 8).

        1 (3 2) 5 1 1 2 3
        
3. Again the left pointer moves to the right. The right pointer now moves two more steps.
   
         1 3 (2 5 1) 1 2 3

The required sum has been found.

2. #### Two sum problem:
	 *we  are given an array of integers and a sum x. We have to find if it is possible to get two array values which sum to x.*

 - For example, lets say x = 15.

         1 3 5 7 9 6 10
         
         The answer is yes because it is possible to select 9 and 6 which sum to 15.
- Complexity : O(nlogn){for sort}+O(n){for two pointer method shown below} = O(nlogn) 
##### Algorithm steps:

1. Sort the array.
2. Initialize i with the first value and j with the last value.
						
						1 3 5 6 7 9 10
					    i            j
3. Move i from left to right and move j backwards untill the sum of i and j elements become atmost x.
    -  Here i moves from left to right untill it reaches 6.
			    
					    1 3 5 6 7 9 10
					          i      j 
	- As the sum exceeds 15 the value of j decreases.
						
						1 3 5 6 7 9 10
						      i	  j
4. The sum is now 15. Hence the algorithm ends.		          


