/*
Given an array containing N elements. Each element is either 0 or 5. Find the largest number divisible by 90 that can be made using any number of elements of this array and arranging them in any way.

Examples:

Iufut an

Input: arr[] (5, 5, 5, 5, 5, 5, 5, 5, 8, 5, 5)

Output: 5555555550

Input: arr[] = {5, 0)

Output: 0
*/

// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
/*
LOGIC
1. Permuate the number of e's and 5's
2. calculate the count of e's and 5's by traversing an array. 
3. to be divisible by 90, it should be divisible by both 9"10 (9 and 10).
4. For a number to be divisible by 10, it should end with e.
5. For a number to be divisible by 9, the sum of digits should be divisible by 9.
6. if the count of e's is e then it can't form a number, return -1. 
7. if there are no 5's then only number that can be made divisible by 9e is 0.
8. If both the above conditions are false. Let's group the number of 5s into groups of 9. There are going to be floor (c5/9) groups that are completely filled
*/

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ 

#include<stdio.h>
#include<iostream>
#include<cmath>
using namespace std;
void largestnumberDivisible(int n, int arr[])
{
    int count0=0;
    int count5=0;

    for(int i=0;i<n;i++)
    {
        if(arr[i] == 0)
        {
            count0++;
        }
        else
        {
            count5++;
        }
    }

    if(count0==0)
    {
        cout<<"-1"<<endl;
    }
    if(count5==0)
    {
        cout<<"0"<<endl;
    }
    count5 = floor(count5/9)*9;
    for(int i=1;i<count5;i++)
    {
        cout<<"5";
    }
    for(int j=1;j<count0;j++)
    {
        cout<<"0";
    }
}

int main()
{
    int n = 5;
    int arr[] = {0,0,0,0,0};
    largestnumberDivisible(n,arr);
}
