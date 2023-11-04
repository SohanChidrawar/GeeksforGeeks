/*
Given a number n, write a function that returns count of numbers from 1 to n that don't contain digit 3 in their decimal representation.
Input: n 10

Output: 9

Input: n = 45

Output: 31

// Numbers 3, 13, 23, 30, 31, 32, 33, 34, 
// 35, 36, 37, 38, 39, 43 contain digit
*/

-----------------------------------------------------------------------------------------------------------------------------------------------
/*
LOGIC:
1. if n is less than 3, return n.
2. if n is greater than or equal to 3, or less than 10, the output will be n-1.
3. for numbers larger than 9, calculate the msd (most significant digit)
4. It checks if the MSD is not equal to 3. Since msd = 3 (4 is not equal to 3), it proceeds to the following calculation:
5. count(msd): This counts the numbers that start with the MSD, which is count(4). This is a recursive call. 
   count(po 1): This counts the numbers formed by the remaining digits (excluding the MSD), which is count(9) because po would be 18 for n = 45. 
  count(n % po): This counts the numbers formed by the digits after the MSD, which is count(5) because it looks at the number 5.
6. If the MSD is equal to 3, it means we need to count numbers differently. In this case, it recursively calls count(msd po- 1).
*/

#include<stdio.h>
#include<iostream>
using namespace std;

int containdigitThree(int n)
{
    if(n<3)
    {
        return n;
    }
    if (n>=3 && n<10)
    {
        return n-1;
    }

    int po = 1;
    while(n/po > 9)
    {
        po = po*10;
    }
    int msd = n/po;

    if(msd!= 3)
    {
        return containdigitThree(msd)* containdigitThree(po-1)+ containdigitThree(msd)+containdigitThree(n%po);
    }
    else
    {
        return containdigitThree(msd*po-1);
    }
}

int main()
{
    int n;
    cin>>n;
    cout<<""<<containdigitThree(n);
}
