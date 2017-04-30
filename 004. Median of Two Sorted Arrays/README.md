There are two sorted arrays nums1 and nums2 of size m and n respectively.

Find the median of the two sorted arrays. The overall run time complexity should be O(log (m+n)).

Example 1:

nums1 = [1, 3]
nums2 = [2]

The median is 2.0

Example 2:

nums1 = [1, 2]
nums2 = [3, 4]

The median is (2 + 3)/2 = 2.5

求两个有序数组的中值。

我的方法是建立一个新的空数组，然后依次按顺序将两个数组中的值加入数组中，直到数组元素个数比总元素个数的一半多1个，则可直接输出结果。
