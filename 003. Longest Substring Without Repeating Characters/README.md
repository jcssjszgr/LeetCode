 题目：

Given a string, find the length of the longest substring without repeating characters.

Examples:

Given "abcabcbb", the answer is "abc", which the length is 3.

Given "bbbbb", the answer is "b", with the length of 1.

Given "pwwkew", the answer is "wke", with the length of 3.
Note that the answer must be a substring, "pwke" is a subsequence and not a substring.

求一个字符串不含重复字符的最长子字符串。

我用的是比较笨的方法，即先建立源字符串的临时子字符串temp，起点为0，长度为0，对temp是否含重复字符进行判断。
之后遍历源字符串，若临时字符串temp中不含该字符，则将该字符加到temp后面，若存在该字符，则起点+1，长度为当前temp的长度，
建立新的temp字符串，直至完成子字符串起点的遍历。
