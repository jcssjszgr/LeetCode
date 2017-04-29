class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		string longest;
		string temp;
		int i, j;
		bool repeat;
		for (i = 0; i + longest.length() < s.length(); i++)
		{
			temp = s.substr(i, longest.length());
			repeat = false;
			
			//若temp中有重复字符，则continue
			for (j = 0; j < (int)temp.length() - 1; j++)
			//string::length()方法返回值为unsinged int类型，用(int)强制转换防止返回0时出现问题
			{
				if (temp.find(temp[j], j + 1) != string::npos)
				{
					repeat = true;
					break;
				}
			}
			if (repeat)
				continue;
			
			for (j = i + temp.length(); j < s.length(); j++)
			{
				if (temp.find(s[j]) == string::npos)
					temp += s[j];
				else
					break;
			}
			if (temp.length() > longest.length())
				longest = temp;
		}
		return longest.length();
	}
};
