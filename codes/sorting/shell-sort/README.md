## Learn:
- **Shell sort method:**
  - Sort elements like insertion sort, but within a gap.	.
  - Once all elements are sorted, reduce gap and keep sorting.
  - When gap reduced to one, it will be like insertion sort, but with minimum changes.

- **Implementation method:**
    - [x] Iteration with array.
    - [ ] Iteration with linked list.

- **Time Complexity:**
    - When gap is **Lower bound of [N/2<sup>k</sup>], where k>=1**: **O(n<sup>2</sup>)**.
    - For other gap: see **wikipedia**.

- **Visualization link:** https://www.cs.usfca.edu/~galles/visualization/ComparisonSort.html

- **Points to be noted (source: wikipedia):**
  - **Shell sort** is a generalization of **insertion sort** that allows the exchange of items that are far apart. The idea is to arrange the list of elements so that, starting anywhere, considering every hth element gives a sorted list. Such a list is said to be h-sorted.
  - Selection sort implementation does not require extra space as sorting is done on given input data area.
  - An implementation of **shell sort** is present in the Linux kernel.
  - It is faster while implemented with **array** rather than **linked list**.
    - Unlike arrays, linked list nodes may not be adjacent in memory.
    - Unlike arrays, random access in linked list is not possible. Shell Sort requires a lot of this kind of access. In linked list to access i’th index, we have to travel each and every node from the head to i’th node as we don’t have continuous block of memory. Therefore, the overhead increases for shell sort.
  - If gap value is changed, time complexity also changes. See **wikipedia**.

![picture alt](https://github.com/ami-arkhan/study-materials/blob/master/codes/sorting/shell-sort/shell_sort.jpg "Shell Sort")
![picture alt](https://github.com/ami-arkhan/study-materials/blob/master/codes/sorting/shell-sort/shell_sort.gif "Shell Sort Animation")



### Input:
5   // Total test cases

5   // Number of data

4 9 5 1 3   // Data

5

0 4 3 2 1

5

9 7 5 6 8

10

0 2 4 6 8 1 3 5 7 9

10

9 8 7 6 5 4 3 2 1 0



### Output:
#1 1 3 4 5 9    // #Test case number, Sorted data using shell sort

#2 0 1 2 3 4

#3 5 6 7 8 9

#4 0 1 2 3 4 5 6 7 8 9

#5 0 1 2 3 4 5 6 7 8 9
