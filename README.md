# Algo_Notes


Topics to be covered :

1. Ammortized analysis.
2. Range Queries



# Ammortized Analysis

- occasional operation is slow but overall time complexity is fast.
- Examples :
	- Hash Table 
	- Splay tree
	- Disjoint Set
[![lecture source](http://img.youtube.com/vi/3MpzavN3Mco/0.jpg)](http://www.youtube.com/watch?v=3MpzavN3Mco)

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





