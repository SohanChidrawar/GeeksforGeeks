/*
Given two strings a and b consisting of lowercase characters. The task is to check whether two given strings are an anagram of each other or not. 
An anagram of a string is another string that contains the same characters, only the order of characters can be different. For example, act and tac are an anagram of each other.

Note:- If the strings are anagrams you have to return True or else return False [s] represents the length of string s.

Example 1: Input:a = batman, b = mantab

Output: YES

Explanation: Both the string have same characters with same frequency. So, both are anagrams.

Example 2: Input:a allergy, b = allergic

Output: NO

Explanation: Characters in both the strings are not same, so they are not anagrams.
*/

// -------------------------------------------------------------------------------------------------------------------------------------------------------

#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;

bool isAnagram(string a, string b)
{
    if(a.length() != b.length())
    {
        return false;
    }

    vector<int>freq(26,0);

    for(int i=0;i<a.length();i++)
    {
        freq[a[i] - 'a']++;
        freq[b[i] - 'a']--;
    }

    for(int i=0;i<26;i++)
    {
        if(freq[i] !=0)
        {
            return false;
        }
    }
}

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    if(isAnagram(s1,s2))
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
}
